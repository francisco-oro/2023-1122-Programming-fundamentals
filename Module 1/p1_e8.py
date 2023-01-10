a = int(input("First number: "))
b = int(input("Second number: "))
MCD = i = 1 
isOver = False 
while(not isOver): 
    if(i >= a or i >= b): isOver = True 
    if(a % i == 0 and b % i == 0): MCD = i
    i += 1
print("MCD  = ", MCD)   