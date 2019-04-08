
int main(int argc, char* argv[])
{
 char s[80];
 int i;
 gets(s);
 for (i=strlen(s)-1; i>=0; i--)  printf("%c",s[i]);


 return 0;
}
