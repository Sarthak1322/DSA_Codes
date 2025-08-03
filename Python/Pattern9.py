"""
   1 
   2 1
   3 2 1
   4 3 2 1
   print the above pattern


"""

print("enter the number: ")
n = int(input())
for i in range(1, n+1):
    
    a = i
    for j in range(i):
        
        print(a, end=" ")
        a -= 1
    
    print()