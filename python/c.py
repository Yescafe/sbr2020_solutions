# 本题逻辑正确，提交失败，待完善
n = int(input())
for _ in range(n):
    s = input()
    if s.find('-') == -1:
        print('-'.join(c for c in s))
    else:
        print(''.join(filter(lambda x: x != '-', [c for c in s])))
