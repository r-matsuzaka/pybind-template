#include <pybind11/pybind11.h>
#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

int dp_cpp() {
  int n = 6;
  vector<long long> a;
  a.push_back(4);
  a.push_back(2);
  a.push_back(9);
  a.push_back(7);
  a.push_back(1);
  a.push_back(5);

  long long dp[n][n];
  rep(i, n) dp[i][i] = a[i];

  for (int i = n - 2; i > -1; --i) {
    for (int j = i + 1; j < n; ++j) {
      dp[i][j] = max(a[i] - dp[i + 1][j], a[j] - dp[i][j - 1]);
    }
  }
  cout << dp[0][n - 1] << endl;
  return dp[0][n - 1];
}

PYBIND11_MODULE(dp_test, m) {
    m.doc() = "pybind11 dp plugin"; // optional module docstring

    m.def("dp_cpp", &dp_cpp, "A function for dynamic programming");
}