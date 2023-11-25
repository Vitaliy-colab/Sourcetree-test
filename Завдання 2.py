import math
def f(x):
    f=(math.sin(x)/x)+x*math.cos(1/x)
    return f
x1=int(input("Введіть x1: "))
x2=int(input("Введіть x2: "))
x3=int(input("Введіть x3: "))
y=(f(2*x1)-f(x1)*f(x2))/f(x3)
print("y= %3.4f" %y)