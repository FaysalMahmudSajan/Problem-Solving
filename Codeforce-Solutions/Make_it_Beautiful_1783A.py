# Problem: Make it Beautiful
# Links: https://codeforces.com/contest/1783/problem/A


import sys

def solve():
    n = int(sys.stdin.readline())
    arr = list(map(int, sys.stdin.readline().split()))

    arr[0], arr[1] = arr[1], arr[0]

    arr[n - 1], arr[0] = arr[0], arr[n - 1]

    if arr[0] == arr[1]:
        sys.stdout.write("NO\n")
    else:
        sys.stdout.write("YES\n")
        sys.stdout.write(" ".join(map(str, arr)) + "\n")

T = int(sys.stdin.readline())
for _ in range(T):
    solve()