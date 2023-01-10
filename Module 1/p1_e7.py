a = b = [x for x in range(1, 9) if x % 2 == 0]
for m in a:
    for n in b:
        if(m ** 4 + 7 * n ** 2 < 540):
            print(m, n, sep = " and ")