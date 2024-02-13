def go_right(row, column):
    column += 1
    return row, column

def go_down(row, column):
    row += 1
    pos = [row, column]
    return pos


def go_left(row, column):
    row -= 1
    pos = [row, column]
    return pos

def go_up(row, column):
    column -= 1
    pos = [row, column]
    return pos


##################### MAIN FUNCTION
def snail(snail_map):
    final_arr = []
    positions_used = []

    max_position = len(snail_map)-1
    print('max position:', max_position)
    movements = (go_right, go_down, go_left, go_up)

    # mapping
    column = 0
    row = 0
    current_position = [row,column]
    movement_number = 0

    # main 
    count = 0
    # run over all the array
    for count in range(len(snail_map)*len(snail_map)):

        # verify if the position was aready used
        positions_used.append(current_position)

        print('current position:', current_position)
        print('column: ', column, 'row:', row)

        if column <= max_position:
            # moving the cursor
            row, column = movements[movement_number](row, column)
            current_position[0] = row
            current_position[1] = column
            ## VERIFY WHAT WILL BE THE NEXT MOVEMENT
            if current_position[0]+1 in positions_used:
                movement_number = 0
            # going down
            if column == max_position and row < max_position and movement_number == 0:
                movement_number += 1
            # going left
            if column == max_position and row == max_position and movement_number == 1:
                movement_number += 1
            # going up
            if column < max_position and row == 0 and movement_number == 2:
                movement_number += 1
            
            positions_used.append(current_position)

        count+=1
    
    return 'returning this'

#################### RETURNING

def main():
    arr = [[1,2,3,4],
           [5,6,7,8],
           [9,10,11,12],
           [13,14,15,16]]
    
    print(snail(arr))

main()