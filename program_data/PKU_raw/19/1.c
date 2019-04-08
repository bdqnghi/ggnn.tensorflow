
int main() {
  char buf1[100];
  char buf2[100];
  char buf3[100];
  char *tmp;
  gets(buf1);
  gets(buf2);
  gets(buf3);
  tmp = buf1;
  while ((*tmp) != 0) {
    if (strncmp(tmp, buf2, strlen(buf2)) == 0) {
      if ((tmp == buf1 || *(tmp-1) == ' ')) {
        printf("%s", buf3);
        tmp += strlen(buf2);
      } else {
        printf("%c", *tmp);
        ++tmp;
      }
    }
    else {
      printf("%c", *tmp);
      ++tmp;
    }
  }
  return 0;
}
