# solving-a-maze
Program does the following:
  - reads a maze from the standard input
      - first width & height will be present in input in that order (size of maze may be 100x100 or smaller)
      - next input will be the maze, one row at a time
          - '*' asterisk character represents a wall
          - ' ' space character represents open space through which one can move (i.e. a corridor)
          - one point in maze will have an 'S' to indicate "start" & one point will have an 'F' to indicate finish
  - finds a path from start to finish through a maze without going through walls by using recursion
      - inidicates path on maze using the '.' character
  - prints the maze with the path identified on the standard output
