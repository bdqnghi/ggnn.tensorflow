int main()
{
    int i,j,m;
    char a[100],c[100];
    for(i=0;i<100;i++)
   { scanf("%c",&a[i]);
   if(a[i]=='\n')
   break;}
for(j=0;j<i-1;j++)
{c[j]=a[j]+a[j+1];}
c[i-1]=a[0]+a[i-1];
for(m=0;m<i;m++)
   {
    printf("%c",c[m]);}
      return 0;}