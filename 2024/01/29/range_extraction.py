def solution(args):
    final_string = ''
    formated_str = ''

    i = 0
    n = min(args)
    s = 0

    for x in args:
        
        if min(args) < x < max(args):
            if x == n:
                n += 1
                s += 1
                final_string += '{}, '.format(str(x))
                
                print('normal str: ', final_string)
                print('formated string:', formated_str)
            else:
                s += 1
               
                if s >= 3:
                    formated_str += '{}-{}, '.format(str(n-s), n)
                    s = 0
                    
                n = x
                
                final_string += '{}, '.format(str(x))
                print('formated string:', formated_str)
                print('normal str: ', final_string)
 

                
        elif min(args) == x:
            final_string += '{}, '.format(str(x))
            
        elif max(args) == x:
            final_string += '{}'.format(str(x))
    return formated_str

# returns "1-3,5,6,8-11"
print(solution([1,2,3,5,6,8,9,10,11]))
