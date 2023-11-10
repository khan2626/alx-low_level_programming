#!/usr/bin/python3
"""calculates perimetr of an island"""

def island_perimeter(grid):
    """Returns perimeter of an island"""

    breadth = len(grid[0])
    height = len(grid)
    size = 0
    boundary = 0

    for i in range(height):
        for j in range(breadth):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[j - 1][i] == 1):
                    boundary += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    boundary += 1
    return size * 3 - boundary * 2 + 1
