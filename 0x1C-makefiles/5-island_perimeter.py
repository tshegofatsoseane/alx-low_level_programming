#!/usr/bin/python3
"""Defines a function FOR measuring island perimeter."""


def island_perimeter(grid):
    """A function to return the perimiter of an island.


    Args:
        grid (list): A list of int values representing an island.
    Returns:
        Results
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
