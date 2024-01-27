def main():
    print(solution('abafasdfc'))
    
def solution(s) :
    final_string = ''
    
    if (len(s) % 2 == 0):
        current_string = s
    else:
        current_string = s + '_'

    count = 0
    for x in current_string:
        final_string += x
        count += 1
        if count == 2:
            final_string += ' '
            count = 0

    return list(final_string.split())

main()
