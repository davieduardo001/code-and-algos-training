def main():
    print(generate_hashtag("ABbCccDdddEeeeeFfffffGggggggHhhhhhhhIiiiiiiiiJjjjjjjjjjKkkkkkkkkkkLlllllllllllMmmmmmmmmmmmmNnnnnnnnnnnnnnOooooooooooooooPpppppppppppppppQqq"))
    
def generate_hashtag(s):
    s = list(s.strip().title())
    
    if s == '':
        return False
    
    while ' ' in s:
        s.remove(' ')
    
    s = '#' + ''.join(s)
    
    if (len(s) <= 140):
        print(len(s))
        return s
    else:
        return False

main()
