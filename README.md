# pybind-template

## How to run the code

1. Compile c++ codes
```
cd src/cpp
c++ -O3 -Wall -shared -std=c++11 -fPIC $(python3 -m pybind11 --includes) example.cpp -o example$(python3-config --extension-suffix)
c++ -O3 -Wall -shared -std=c++11 -fPIC $(python3 -m pybind11 --includes) progress_test.cpp -o progress_test$(python3-config --extension-suffix)
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