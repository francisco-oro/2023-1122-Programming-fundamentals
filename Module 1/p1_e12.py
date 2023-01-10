try:
    r = float(input("Radius = "))
    g = float(input("Generatrix = "))
    h = float(input("Height = "))
except:
    print("Invalid input")
if(r <= 0 or g <= 0 or h <= 0):
    print("Invalid input")
else: 
    Ab = r ** 2 * 3.1459
    Al = r * g * 3.1459
    At = Ab + Al 
    V = 3.1459 * h * r ** 2
    print("Area of the base:", Ab)
    print("Area of the lateral side:", Al)
    print("Total area:", At)
    print("Volume:", V)