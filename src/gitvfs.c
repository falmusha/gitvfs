#include "gitvfs.h"

int main() {
  printf("First line of gfs");

  return 0;
}

int rep_open() {
  git_repository *repo = NULL;
  int error = git_repository_open(&repo,"/path/to/repo");
  return error;
}
