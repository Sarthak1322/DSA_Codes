"""
   1
   22
   333
   4444
   print the above pattern


"""

print("Enter the number:")
n = int(input())
a =1
for i in range(n):
    for j in range(i+1):
        print(a, end="")
    print()
    a += 1
