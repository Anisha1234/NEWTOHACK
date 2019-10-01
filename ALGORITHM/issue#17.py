import random

numbers = []

# Fill the array with random numbers in the [0, 100] range with 30 number.
for x in range (30):
	numbers.append(random.randint(0, 100))

# find the maxmimum value using the builtin max function
print("The biggest number in array is: " + str(max(numbers)))
