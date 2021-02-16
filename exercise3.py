# Faulty calculator
print("Enter two values to compute")
var1 = int(input())
var2 = int(input())
print("choose the operation")
print("1.Add\n2.multiply\n3.divide\n4.subtract")
op = int(input())
if op == 1:
    if var1 == 56 and var2 == 9 :
        print("77")
    else:
        print(var1+var2)
elif op == 2:
    if var1 == 45 and var2 == 3 :
        print("555")
    else:
        print(var1 * var2)
elif op == 3 :
    if var1 == 56 and var2 == 6:
        print("4")
    else:
        print(var1 / var2)
elif op == 4 :
    print(var1 - var2)
