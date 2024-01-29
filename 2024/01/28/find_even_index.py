def main():
    print(find_even_index([1,2,3,4,3,2,1]))
    
def find_even_index(arr):

    index_counter = 0
    arr_of_right_sums = []
    arr_of_left_sums = []
    
    arr_lenght = len(arr)

    if arr_lenght == 2:
        return -1
    elif arr_lenght == 1:
        return 0
    else:
        # right sum
        for i in range(arr_lenght):
            right_sum = 0
            
            j = i
            
            if arr_lenght-i == 1:
                right_sum = 0
            else:
                for j in range(arr_lenght-i):
                    if j != i:
                        right_sum += arr[j]
                        j+=1
                arr_of_right_sums.append(right_sum)
                
        print('arr of right:', arr_of_right_sums)
        # left sum
        for i in range(arr_lenght):
            left_sum = 0
            print("index:", i, "number:", arr[i])
            
            j = i
            
            if arr_lenght-i == 1:
                left_sum = 0
            else:
                for j in range(arr_lenght)[::-1]:
                    if j != i:
                        left_sum += arr[j]
                        j-=1
                arr_of_left_sums.append(left_sum)

        
        print('arr of right:', arr_of_left_sums)
    
main()

