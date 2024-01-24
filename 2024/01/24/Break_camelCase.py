def main():
    stringFinal = solution('camelCasing')
    print("the result is:", stringFinal)

def solution(s):
    finalString = ""
    for x in s:
        if x.isupper():
            finalString += ' '
        
        finalString += x
        
    return finalString

main()