
from bisect import bisect_left
def binary_search(value,a):
    end = len(a)
    index = bisect_left(a,value)
    return index if index<end and a[index]==value else None
    
    
    
    
def solve():
    for a in range(n):
        for b in range(n):
            for c in range(n):
                if binary_search(m-k[a]-k[b]-k[c],k):
                    print('YES')
                    return True
    print('NO')
    return False

n = int(input())
m = int(input())
k = list(map(int, input().split()))
k.sort()
solve()
