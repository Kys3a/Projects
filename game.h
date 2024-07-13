#if !defined(___GAME__H__)
#define ___GAME__H__

#define MAX_ROWS 2
#define MAX COLS 2

#define MAX_I MAX_ROWS + 2
#define MAX_J MAX_COLS * 2

void gameManager(void);

void initArea(gameArea[][MAX_J], int *playerI, int *playerJ);

#endif
