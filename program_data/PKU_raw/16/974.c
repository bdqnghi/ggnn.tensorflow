int main()
{
 int i=0;
 char str[5];
 scanf("%s",str);
 while(str[i]!='\0')
  i++;
 for(i--;i>=0;i--)
 printf("%c",str[i]);
 printf("\n");
 return 0;
}
