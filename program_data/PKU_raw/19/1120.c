
int main()
{
 char wordbuff[50][20], ch, target[20], replace[20];
 int i, j;
 for (i=0;i<50;i++)
  for (j=0;j<20;j++)
   wordbuff[i][j]='\0';

 i=0;j=0;
 while (1)
 {
  ch=getchar();
  if (ch!='\n' && ch!=' ')
  {
   wordbuff[i][j]=ch;
   j++;
  }
  else
  {
   i++;
   j=0;
  }
  if (ch=='\n') break;
 }
 scanf("%s\n%s",target,replace);
 int n;
 for (n=0; n<i;n++)
 {
  if (!strcmp(wordbuff[n],target))
   strcpy(wordbuff[n],replace);
 }
 for (n=0;n<i;n++)
  if (!n) printf("%s",wordbuff[n]);
  else printf(" %s",wordbuff[n]);
 return 0;
}
