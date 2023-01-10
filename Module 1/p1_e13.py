def conversion(section, subsection,  inUnit):
    if(section == 1):
        if(subsection > 0):
            if(subsection == 1):
                outUnit = inUnit * 25.40
                outStr = "mm"
            elif(subsection == 2):
                outUnit = inUnit * 0.9144
                outStr = "m"
            elif(subsection == 3):
                outUnit = inUnit * 1.6093
                outStr = "Km"
            else:
                print("Index", subsection, "is not defined")
        elif(subsection < 0): 
            if(subsection == -1):
                outUnit = inUnit * 25.40 ** (-1)
                outStr = "in"
            elif(subsection == -2):
                outUnit = inUnit * 0.9144 ** (-1)
                outStr = "yd"
            elif(subsection == -3):
                outUnit = inUnit * 1.6093 ** (-1)
                outStr = "mi"
            else:
                print("Index", subsection, "is not defined")
        else: 
            print("Index", subsection, "is not defined")
    elif(section == 2):
        if(subsection > 0):
            if(subsection == 1):
                outUnit = inUnit * 0.02832
                outStr = "m^3"
            elif(subsection == 2):
                outUnit = inUnit * 0.7646
                outStr = "m^3"
            elif(subsection == 3):
                outUnit = inUnit * 4.54609
                outStr = "lt"
            else:
                print("Index", subsection, "is not defined")
        elif(subsection < 0): 
            if(subsection == -1):
                outUnit = inUnit * 0.02832 ** (-1)
                outStr = "ft^3"
            elif(subsection == -2):
                outUnit = inUnit * 0.7646 ** (-1)
                outStr = "yd^3"
            elif(subsection == -3):
                outUnit = inUnit * 4.54609 ** (-1)
                outStr = "gal^3"
            else:
                print("Index", subsection, "is not defined")
        else: 
            print("Index", subsection, "is not defined")
    elif(section == 3):
        if(subsection > 0):
            if(subsection == 1):
                outUnit = inUnit * 28.35    
                outStr = "gr"
            elif(subsection == 2):
                outUnit = inUnit * 0.45359
                outStr = "kg"
            elif(subsection == 3):
                outUnit = inUnit * 1.016
                outStr = "ton"
            else:
                print("Index", subsection, "== not defined")
        elif(subsection < 0): 
            if(subsection == -1):
                outUnit = inUnit * 28.35 ** (-1)
                outStr = "oz"
            elif(subsection == -2):
                outUnit = inUnit * 0.45359 ** (-1)
                outStr = "lb"
            elif(subsection == -3):
                outUnit = inUnit * 1.016 ** (-1)
                outStr = "en ton"
            else:
                print("Index", subsection, "== not defined")
        else: 
            print("Index", subsection, "== not defined")
    else:
        print("Section", section, "== not defined")
    return(str(outUnit) + " " + outStr)


print("List of inputs: \n1 Length\n1.1 Inches to milimiters \n1.2 Yards to meters \n1.3 Miles to kilometers \n 2 Volume: \n2.1 Cubic feet to cubic meters \n2.2 Cubic yards to cubic meters \n2.3 Gallons to liters \n3 Weight \n3.1 Ounces to grams \n3.2 Pounds to kilograms \n3.3 English tons to standard tonds")
section = int(input("Choose a section: "))
subsection = int(input("Enter the index of conversion (negative to switch units of meauserement: )"))
inUnit = int(input("Enter a quantity to convert: "))
print(conversion(section, subsection, inUnit))
