void main()
{
 char str[100][10]={"\0"},substr[100][3]={"\0"},a[100][13]={"\0"};
 int i=0,j=0,k=0,m=0;
 for(i=0;i<100;i++)
 {
  scanf("%s %s",str[i],substr[i]);
  if(str[i][0]=='\0') {break;}
  m=strlen(str[i]);
  for(j=0;j<m;j++)
  {
   if(str[i][j+1]>str[i][k])
    k=j+1;
  }
  for(j=0;j<=k;j++)
   a[i][j]=str[i][j];
  a[i][k+1]=substr[i][0];
  a[i][k+2]=substr[i][1];
  a[i][k+3]=substr[i][2];
  m=strlen(str[i]);
  for(j=k+1;j<m;j++)
   a[i][j+3]=str[i][j];
 }
 for(k=0;k<i;k++)
  printf("%s\n",a[k]);
}
