n = int(input())
sa, sb = 0, 0
for _ in range(n):
    a, b = input().split()
    a, b = int(a), int(b)
    sa += a
    sb += b
if sa < sb:
    print('False')
else:
    print('True')