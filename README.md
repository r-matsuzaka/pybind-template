# pybind-template

## How to run the code

1. Compile c++ codes
```
cd src/cpp
c++ -O3 -Wall -shared -std=c++11 -fPIC $(python3 -m pybind11 --includes) example.cpp -o example$(python3-config --extension-suffix)
c++ -O3 -Wall -shared -std=c++11 -fPIC $(python3 -m pybind11 --includes) progress_test.cpp -o progress_test$(python3-config --extension-suffix)
```

2. Run example code
```
python src/run_example.py
```

Output
```
3
-1
[====================================================================================================] 100 %
```

## Ref.
- [pybind11 First steps](https://pybind11.readthedocs.io/en/stable/basics.html)