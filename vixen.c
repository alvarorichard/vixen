#include <unistd.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  char c;
  while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q');
  return EXIT_SUCCESS;
}
