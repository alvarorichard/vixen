#include <unistd.h>
#include <stdlib.h>
#include <termios.h>

void enableRawMode()
{
    struct termios raw;
    
    tcgetattr(STDIN_FILENO, &raw);
    
    raw.c_lflag &= ~(ECHO | ICANON);
    
    tcsetattr(STDIN_FILENO, TCSAFLUSH,&raw);
}

int main(int argc, char *argv[])
{
  enableRawMode();
  
  char c;
  while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q');
  return EXIT_SUCCESS;
}
