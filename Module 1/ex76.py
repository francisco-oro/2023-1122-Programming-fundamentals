def newOrder(costs):
    elementsbyTag = []
    total = []
    for i in range(7): 
        elementsbyTag.append(0)
        total.append(0)
    key = int(input("Ingrese la clave del alimento a consumir o ingrese 0 para terminar el proceso: "))
    while(key):
        if(key >= 1 and key <= 7):
               elementsbyTag[key-1] += int(input("Ingrese la cantidad de platillos " + str(key) + " a consumir: "))
        else: 
            print("Identificador desconocido")
        key = int(input("Ingrese la clave del alimento consumir o ingrese 0 para terminar el proceso: "))
    for i in range(7): total[i] = costs[i] * elementsbyTag[i]
    orden = [[x for x in range(1,8)], elementsbyTag, costs, total]
    return orden

numOrder = 0
costs = [0 for i in range(7)]
globalTotal = 0
for cost in range(7): costs[cost] += int(input("Input the cost of the d==h " + str(cost + 1) + ":"))
print("You've provided the following costs: ")
for cost in costs: 
    print(cost)
action = input("Ingrese el comando /new para realizar una nueva orden, o ingrese /end para finalizar: ")
while(action != '/end'):
    if(action == '/new'):
        currentTotal = 0
        numOrder += 1
        currentOrder = newOrder(costs)
        for i in currentOrder[3]: currentTotal += i
        globalTotal += currentTotal
        print("Number of ticket: ", numOrder)
        print("Key", "Quantity","Unit cost", "Total cost", sep ="  ")
        for i in range(7):
            for n in range(4): print(currentOrder[n][i], end ="       ")
            print("\n")
        print("Total amount to pay: ", currentTotal)
    else:
        print("Unknown command. Please try again")
    action = input("Ingrese el comando /new para realizar una nueva orden, o ingrese /end para finalizar: ")

print(numOrder, "orders were made today")
print("The total sales were: ", globalTotal, "today")
