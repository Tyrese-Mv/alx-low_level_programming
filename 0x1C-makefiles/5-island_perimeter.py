#!/usr/bin/python3

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
    for o in range(len(grid)):
        for i in range(len(grid[0])):
            if grid[o][i] == 1:
                perimCheck = 4
                if grid[o-1][i] != 0:
                    perimCheck -= 1
                if grid[o][i+1] != 0:
                    perimCheck -= 1
                if grid[o][i-1] != 0:
                    perimCheck -= 1
                if grid[o+1][i] != 0:
                    perimCheck -= 1
                count += perimCheck
    return count
