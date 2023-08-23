#!/usr/bin/python3
""" Island Perimeter"""


def island_perimeter(grid):
    """returns the perimeter of
    the island described in grid"""
    width = len(grid[0])
    height = len(grid)
    size = 0
    edges = 0

    for i in range(height):
        for n in range(width):
            if grid[i][n] == 1:
                size += 1
                if n > 0 and grid[i][n - 1] == 1:
                    edges += 1
                if i > 0 and grid[i - 1][n] == 1:
                    edges += 1
    return size * 4 - edges * 2
