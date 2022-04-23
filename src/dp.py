import time
from cpp import dp_test

# python
start = time.time()
n = 6
a = [4, 2, 9, 7, 1, 5]
dp = [[0] * n for _ in range(n)]
for i in range(n):
    dp[i][i] = a[i]

for i in range(n - 2, -1, -1):
    for j in range(i + 1, n):
        dp[i][j] = max(a[i] - dp[i + 1][j], a[j] - dp[i][j - 1])

ans1 = dp[0][n - 1]
print(f"Answer python: {ans1}")
end = time.time()
python_time = end - start
print(f"time python {python_time} sec")

print("------------------------")

# c++
start = time.time()
ans2 = dp_test.dp_cpp()
print(f"Answer c++: {ans2}")

end = time.time()
cpp_time = end - start
print(f"time c++ {cpp_time} sec")

print(f"c++ is {python_time/cpp_time} faster than python.")