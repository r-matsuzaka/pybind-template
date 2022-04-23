# pybind-template

## How to run the code

0. Install package
```
sudo apt-get install libboost-dev
```

1. Compile c++ codes
```
cd src/cpp
c++ -O3 -Wall -shared -std=c++11 -fPIC $(python3 -m pybind11 --includes) example.cpp -o example$(python3-config --extension-suffix)
c++ -O3 -Wall -shared -std=c++11 -fPIC $(python3 -m pybind11 --includes) progress_test.cpp -o progress_test$(python3-config --extension-suffix)
c++ -O3 -Wall -shared -std=c++11 -fPIC $(python3 -m pybind11 --includes) progress_test2.cpp -o progress_test2$(python3-config --extension-suffix)
c++ -O3 -Wall -shared -std=c++11 -fPIC $(python3 -m pybind11 --includes) dp_test.cpp -o dp_test$(python3-config --extension-suffix)
```

2. Run example codes

Ex.1
```
python src/run_example.py
```

Output
```
3
-1
[====================================================================================================] 100 %

0%   10   20   30   40   50   60   70   80   90   100%
|----|----|----|----|----|----|----|----|----|----|
***************************************************
```

Ex.2
```
python src/dp.py
```

Output
```
Answer python: 2
time python 3.647804260253906e-05 sec
------------------------
2
Answer c++: 2
time c++ 1.6689300537109375e-05 sec
c++ is 2.1857142857142855 faster than python.
```

## Ref.
- [pybind11 First steps](https://pybind11.readthedocs.io/en/stable/basics.html)
- [Python, Java, C++の速度比較](https://qiita.com/Lily0727K/items/26d3e68d66a6a641b010)
- [Atcoder L - Deque](https://atcoder.jp/contests/dp/tasks/dp_l)
- [sleep｜処理を一時停止する 複数の方法【C言語/C++/Swift/Objective-C】](https://marycore.jp/prog/objective-c/sleep-process/#sleep_for)
- [How do I upgrade boost progress?](https://stackoverflow.com/questions/57563796/how-do-i-upgrade-boost-progress)