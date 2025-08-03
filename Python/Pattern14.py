"""
/*
   A
   BB
   CCC
   print the above pattern*/

"""
print("Enter the number of rows: ")
n = int(input())
s = 'A'
for i in range(1, n+1):
      # Starting character for each row
    for j in range(i):
        print(s, end="")
        
    print()
    s = chr(ord(s) + 1)
