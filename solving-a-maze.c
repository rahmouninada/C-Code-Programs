/* C Program to solve a maze recursively */

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define MAX 100

int maze[100][100];
int wasHere[100][100];
int correctPath[100][100];
int width, height;
int startX, startY, endX, endY;

int recursiveSolve(int x, int y);

int main() {

        int x, y;
        scanf("%d%d", &width, &height);
        scanf("\n");

        char tempchar;

        for(y = 0; y < height; y++) {
                for(x = 0; x < width; x++) {
                        scanf("%c", &tempchar);
                        maze[y][x] = tempchar;

                        if (tempchar == 'S') {
                                startX = x;
                                startY = y;
                        }

                        if (tempchar == 'F') {
                                endX = x;
                                endY = y;
                        }

                wasHere[y][x] = false;
                correctPath[y][x] = false;
                }

                scanf("\n");
        }

        recursiveSolve(startX, startY);

        for(int y = 0; y < height; y++) {
                for(int x = 0; x < width; x++) {
                        if(correctPath[y][x] == true && maze[y][x] != 'S') {
                                printf(".");
                        } else {
                                printf("%c", maze[y][x]);
                        }
                }
                printf("\n");
        }
}

int recursiveSolve(int x, int y) {

        if (x == endX && y == endY) {
                return true;
        }

        if (maze[y][x] == '*' || wasHere[y][x]) {
                return false;
        }

        wasHere[y][x] = 1;

        if (x != 0) {
                if (recursiveSolve(x - 1, y)) {
                        correctPath[y][x] = true;
                        return true;
                }
        }

        if  (x != width - 1) {
                if (recursiveSolve(x + 1, y)) {
                        correctPath[y][x] = true;
                        return true;
                }
        }

        if (y != 0) {
                if (recursiveSolve(x, y - 1)) {
                        correctPath[y][x] = true;
                        return true;
                }
        }

        if (y != height - 1) {
                if (recursiveSolve(x, y + 1)) {
                        correctPath[y][x] = true;
                        return true;
                }
        }

        return false;
}
