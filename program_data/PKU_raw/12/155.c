void main()
{
int str_1[20][20];
int str_2[100];
int x,y,m,j;
int sum=0;
int p=0;
int a=0;
int b=0;
int c;
int k;
int i=0;
while(1)
{
  ++p;
  scanf("%d",&x);
  if(-1==x) break;
  k=0;
  str_1[p][i++]=x;
  b++;
  while(1)
  {
   scanf("%d",&y);
   k++;
   str_1[p][i++]=y;
   if(0==y)
   {
    str_1[p][i]='\0';
    break;
   }   
  }
  for(j=0;j<k;j++)
  {
   for(m=0;m<k;m++)
   {
    if(str_1[p][j]==str_1[p][m]*2) ++sum;
   }  
  }
  str_2[a++]=sum;
  sum=0;
  str_2[a]='\0';
  i=0;
}
for(c=0;c<b;c++)
{
  printf("%d",str_2[c]);
  printf("\n");
}
}