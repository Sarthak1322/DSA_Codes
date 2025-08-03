"""
   ABC
   ABC
   ABC
   print the above pattern

"""
print("Enter the number of row: ")
n = int(input())

for i in range(n):
    s = 'A'
    for j in range(n):
        print(s, end="")
        s = chr(ord(s) + 1)
    print()
