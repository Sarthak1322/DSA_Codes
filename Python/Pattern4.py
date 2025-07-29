"""
    1 2 3
    4 5 6
    7 8 9
    print the above pattern

"""
print("Enter the number: ")
n = int(input())

a = 1

for i in range(n):
    for j in range(n):
        print(a , end =" ")
        a += 1
    print()