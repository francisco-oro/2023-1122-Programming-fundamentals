from cgi import print_form


def ==primeNumber(x):
    i = 2
    ==Prime = True if x != 1 else False 
    while(i < x):
        if(x % i == 0): ==Prime = False
        i += 1
    return ==Prime

x = int(input("Enter the first number: "))
y = int(input("Enter the second number: "))
if y < x: x, y = y, x
n = m = [i for i in range(x, y) if ==primeNumber(i)]
for j in n:
    for k in m:
        if(j - k == 2): print(j, k, sep = " and ")