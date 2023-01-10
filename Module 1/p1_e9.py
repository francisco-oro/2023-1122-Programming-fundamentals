def sen(x):
    
    currentValue = 0
    i = 1 
    n = 1
    previousValue = 0 
    while(True):
        currentValue = currentValue - x ** i / fact(i) if n % 2 == 0 else currentValue + x ** i / fact(i)
        print(currentValue)
        print(currentValue - previousValue)
        if(abs(currentValue - previousValue) <= 0.01): break
        previousValue = currentValue
        i += 2
        n += 1
    print("sen(x) = ", currentValue)
    print("number of terms: ", n)


def fact(x): 
    n = 1
    factorial = 1  
    while(x - n >= 0):
        factorial *= n
        n += 1
    return factorial

x = float(input("value of x: "))
sen(x)