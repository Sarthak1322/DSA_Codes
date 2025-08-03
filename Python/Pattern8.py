"""
   1 
   2 3
   3 4 5
   4 5 6 7
   print the above pattern

"""
print("Enter the number:")
n = int(input())
a = 1
for i in range(n):
    for j in range(i+1):
        print(a, end=" ")
        a += 1
    print()