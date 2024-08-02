#include <unistd.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  char c;
  while (read(STDIN_FILENO, &c, 1) == 1);
  return EXIT_SUCCESS;
}
