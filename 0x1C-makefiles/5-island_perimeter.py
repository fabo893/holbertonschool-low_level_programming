#!/usr/bin/python3
"""
    Island Perimeter Module
"""


def island_perimeter(grid):
    """ Return the perimeter of the island """
    r1 = 0
    if grid:
        lenY = len(grid)
        lenX = lenY + 1
        if lenY != 100 or lenX != 100:
            p = 0
            for y in range(0, lenY):
                for x in range(0, lenX):
                    if grid[y][x] == 1:
                        p = p + 1
    r1 = (p * 2) + 2
    return r1
