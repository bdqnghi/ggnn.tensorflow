int main()
{
 int i=0;
 char str[10000];
 scanf("%s",str);
 while(str[i]!='\0')
  i++;
 for(i--;i>=0;i--)
 printf("%c",str[i]);
 printf("\n");
 getchar();
 getchar();
 getchar();
 getchar();
}