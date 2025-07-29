""" 
   111
   222
   333
   print the above pattern
   """

print("Enter the number")
n = int(input())

for i in range(n):
    for j in range(n):
        print(i + 1 , end="")
    print()