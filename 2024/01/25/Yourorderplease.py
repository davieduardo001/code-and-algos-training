def main():
    print(order("is2 Thi1s T4est 3a"))

def order(sentence):
    if sentence is '':
        return ''
    
    finalOrderDict = {}
    finalString = ''
    aArray = list(sentence)

    currentString = ''
    currentNumber = ''

    for x in aArray:
        if x != " ":
            currentString += x
            if x.isdigit():
                finalOrderDict[x] = ""
                currentNumber = x
        else:
            finalOrderDict[currentNumber] = currentString
            currentNumber = ''
            currentString = ''

    finalOrderDict[currentNumber] += currentString

    for i in range(1,10):
        if str(i) in finalOrderDict:
            finalString += finalOrderDict[str(i)]
            finalString += ' '
    
    finalString = finalString[:-1]

    return finalString

main()