def main():
    print(is_triangle(1, 2, 2))
    
def is_triangle(a,b,c):
    if a+b > c and b+c > a and a+c > b:
        return True
    else:
        return False

main()