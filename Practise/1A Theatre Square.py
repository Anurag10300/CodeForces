import math

b = input().split()
for i in range(0,len(b)):
    b[i] = int(b[i])

length = math.ceil(b[0]/b[2])
breadth = math.ceil(b[1]/b[2])

print (length*breadth)