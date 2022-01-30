/*Calculating factorials large numbers, numbers>20, Java and Python can directly handle such large numbers.*/



# To take input from the user
num = int(input("Give the number to calculate factorial: "))

factorial = 1

# check if the number is negative, positive or zero
if num < 0:
   print(0)
elif num == 0:
   print(0)
else:
   for i in range(1,num + 1):
       factorial = factorial*i
   print(factorial)
