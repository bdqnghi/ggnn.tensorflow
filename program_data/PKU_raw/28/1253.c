int main()
{
char str[300][300];
int i=0,j=0,k=0;
for(i=0;i<300;i++)
 {
   scanf("%s",&str[i][0]);
   if(str[i-1][0]=='\0') break;
  }
for(;k<i-2;k++)
  printf("%d,",strlen(str[k]));
printf("%d",strlen(str[i-2]));
}