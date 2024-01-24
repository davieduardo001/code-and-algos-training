def main():
    print('the result is:', is_prime(2))

def is_prime(n):
    if n == 1 or n <= 0:
        return False
    
    for x in range(2, n): # int(n**0.5) + 1 (this make less iterations :P)
        if n % x == 0:
            return False   
    return True

main()