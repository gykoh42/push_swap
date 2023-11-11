import random
numbers = list(range(1, 501)) 
random.shuffle(numbers)   
random_numbers_string = ' '.join(map(str, numbers))
print(random_numbers_string)