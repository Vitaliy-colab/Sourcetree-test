import math
def t(u,v):
    t=(u-math.log(v))/(math.log(u)**2) #Функція для розвязку
    return t
a=int(input("Введіть а: "))
x=int(input("Введіть x: "))
z=t(x,a)*math.sin(t(x,a)) #Основна функція
print("z= %3.4f" %z)