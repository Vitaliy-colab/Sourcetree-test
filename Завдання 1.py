import math
def t(u,v):
    t=(u-math.log(v))/(math.log(u)**2)
    return t
a=int(input("Введіть а: "))
x=int(input("Введіть x: "))
z=t(x,a)*math.sin(t(x,a))
print("z= %3.4f" %z)