a, b = input().split()
a, b = int(a), int(b)
if a % 1000 == 0 and b % 618 == 0:
    print('T')
else:
    print('F')