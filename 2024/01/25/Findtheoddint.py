def main():
    print(find_it([1,1,2]))

def find_it(seq):
    numbers = {}

    for x in seq:
        if x not in numbers:
            numbers[x] = 1
        else:
            numbers[x] += 1
    
    for x in numbers:
        if not (numbers[x] % 2 == 0):
            return x

main()