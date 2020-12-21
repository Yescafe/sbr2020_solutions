expr = input()
if expr.find('+') != -1:
    ns = expr.split('+')
    if len(ns) == 3:
        print(int(ns[1]) + int(ns[2]))
    else:
        print(int(ns[0]) + int(ns[1]))
else:
    ns = expr.split('-')
    if len(ns) == 3:
        print(abs(-int(ns[1]) - int(ns[2])))
    else:
        print(abs(int(ns[0]) - int(ns[1])))