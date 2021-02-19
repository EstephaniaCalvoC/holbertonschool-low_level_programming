#!/usr/bin/python3
"""Define function island_perimeter"""


def top(row, col, grid):
    """Return the top perimeter"""

    if row - 1 >= 0:
        cell = grid[row - 1][col]
        if cell == 0:
            return 1
    else:
        return 1
    return 0


def down(row, col, grid):
    """Return the down perimeter"""

    l_rows = len(grid)

    if row + 1 < l_rows:
        cell = grid[row + 1][col]
        if cell == 0:
            return 1
    else:
        return 1
    return 0


def left(row, col, grid):
    """Return the left perimeter"""

    if col - 1 >= 0:
        cell = grid[row][col - 1]
        if cell == 0:
            return 1
    else:
        return 1
    return 0


def right(row, col, grid):
    """Return the right perimeter"""
    l_cols = len(grid[0])

    if col + 1 < l_cols:
        cell = grid[row][col + 1]
        if cell == 0:
            return 1
    else:
        return 1
    return 0


def island_perimeter(grid):
    """Return the perimeter of the island described in grid"""

    perimeter = 0
    l_rows = len(grid)
    l_cols = len(grid[0])

    for row in range(l_rows):
        for col in range(l_cols):
            cell = grid[row][col]
            if cell == 1:
                t = top(row, col, grid)
                d = down(row, col, grid)
                l = left(row, col, grid)
                r = right(row, col, grid)
                perimeter += t + d + l + r
    return perimeter
