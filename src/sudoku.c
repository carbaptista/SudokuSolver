#include "sudoku.h"

char POSSIBLE = 0x1FF;

int main()
{
    int ** puzzle;
    Square *** sudoku;

    puzzle = createPuzzle();

    printPuzzle(puzzle);

    sudoku = setUpPuzzle(puzzle);

    return 0;
}

