
int main()
{
    int n;
    int m,max;
    int i,j,k;
    char a[500]={'\0'};
    char b[500][5]={'\0'};
    int c[500]={0};
    scanf("%d",&n);
    getchar();
    gets(a);
    m=strlen(a);
    for(i=0;i<=(strlen(a)-n);i++)
    {
     for(j=i,k=0;j<i+n;j++,k++)
     {
      b[i][k]=a[j];
     }
    }
    for(i=1;i<=(strlen(a)-n);i++)
    {
      for(j=0;j<i;j++)
      {
       if(strcmp(b[i],b[j])==0)
       c[j]++;
      }   
}
max=0;
for(i=0;i<500;i++)
{
 if(c[i]>max)
 max=c[i];
}
if(max==0)
{
          printf("NO\n");
}
else
{
    printf("%d\n",max+1);
for(i=0;i<500;i++)
{
 if(c[i]==max)
 {
              printf("%s\n",b[i]);
 }
}
}
    
    return 0;
}
