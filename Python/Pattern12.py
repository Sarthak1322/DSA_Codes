"""
/*
   ABC
   DEF
   GHI
   print the above pattern*/

"""
print("Enter the number of row: ")
n = int(input())
s = 'A'
for i in range(n):
    
    for j in range(n):
        print(s, end="")
        s = chr(ord(s) + 1)
    print()