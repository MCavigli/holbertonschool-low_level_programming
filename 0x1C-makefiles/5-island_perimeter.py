#!/usr/bin/python3
'''Module that holds the function def island_permiter'''

def island_perimeter(grid):
    '''Finds the perimeter of an island'''

    if not isinstance(grid, list):
        return 0
    p = 0

    for row in range(len(grid) - 1):
        for col in range(len(grid[row]) - 1):
            if col == 1:
                p += 4
                if row > 0 and grid[row - 1][col] == 1:
                    p -= 1
                if col > 0 and grid[row][col - 1] == 1:
                    p -= 1
                if col < len(grid[row]) and grid[row][col + 1] == 1:
                    p -= 1
                if row < len(grid) and grid[row + 1][col] == 1:
                    p -= 1

    return p
