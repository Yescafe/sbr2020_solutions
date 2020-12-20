n, c = input().split()
n, c = int(n), int(c)
sum = 0
for _ in range(n):
    m = 1000000
    for a in input().split():
        a = int(a)
        m = m if m < a else a
    sum += m
print(sum)