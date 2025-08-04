"""
/*
   A
   BC
   CDE
   print the above pattern*/

"""
print("Enter the number of row: ")
n = int(input())

for i in range(1, n+ 1):
    s = chr(ord("@") + i)
    for j in range(i):
        print(s, end="")
        s = chr(ord(s) + 1)
    print()
