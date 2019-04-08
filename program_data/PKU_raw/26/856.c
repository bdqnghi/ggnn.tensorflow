
int main(){ 
 char aa[1024];
 char *p = NULL;
 memset(aa, 0x00, sizeof(aa));
 gets(aa);
 p = &aa[strlen(aa) - 1];
 while(' ' == *p--)
 {
  p[1] = '\0';
 }
 p = aa;
 while(' ' == *p++);
 p--;
 strcpy(aa, p);
 while(NULL != (p = strstr(aa, "  ")))
 {
  strcpy(p, &p[1]);
 }
printf("%s\n", aa);
 return 0;
} 