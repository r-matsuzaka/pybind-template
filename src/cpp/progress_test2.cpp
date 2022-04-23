#include <pybind11/pybind11.h>
#include <boost/progress.hpp>
#include <chrono>
#include <thread>

using std::this_thread::sleep_for;

void progressbar(){
  int MAX_ROOP = 100;//最大の繰り返し数
  boost::progress_display show_progress( MAX_ROOP );
  for(int i = 0; i < MAX_ROOP; i++){
    ++show_progress;//プログレスバーを更新
    //ここに処理を書く
    sleep_for(std::chrono::milliseconds(100));
    }
  }

PYBIND11_MODULE(progress_test2, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring

    m.def("progressbar", &progressbar, "A function that show progress bar");
}