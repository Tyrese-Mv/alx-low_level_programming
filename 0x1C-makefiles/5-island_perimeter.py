#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid
        > 0 represents a water zone
        > 1 represents a land zone
        > One cell is a square with side length 1
        > Grid cells are connected horizontally/vertically (not diagonally).
        > Grid is rectangular, width and height dont exceed 100
    Args:
        grid (list):  is a list of list of integers

    Returns:
        int: the perimeter of the island
    """
    count = 0
    rows, cols = len(grid), len(grid[0])
    if len(grid) <= 100 and len(grid[0]) <= 100:
        for o in range(rows):
            for i in range(cols):
                if grid[o][i] == 1:
                    perimCheck = 4
                    # if o == 0 or o == len(grid) -1:
                    #     perimCheck -= 1
                    # if i == 0 or i == len(grid[0]) -1:
                    #     perimCheck -=1
                    if o > 0 and grid[o-1][i] == 1:
                        perimCheck -= 1
                    if o < rows - 1 and grid[o+1][i] == 1:
                        perimCheck -= 1
                    if i > 0 and grid[o][i-1] == 1:
                        perimCheck -= 1
                    if i < cols - 1 and grid[o][i+1] == 1:
                        perimCheck -= 1
                    count += perimCheck
    return count
