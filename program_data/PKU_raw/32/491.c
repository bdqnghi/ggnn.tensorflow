int main()
{
    int n,i,j,x,y;
    char a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%s\n%s",a,b);
    x=strlen(a);
    y=strlen(b);
    for(j=y;j>0;j--)
    {
      if(a[j+x-y-1]>b[j-1])
      {
       a[j+x-y-1]=a[j+x-y-1]-b[j-1]+48;
       continue;
      }
      if(a[j+x-y-1]<b[j-1])
      {
       a[j+x-y-1]=a[j+x-y-1]-b[j-1]+58;
       a[j+x-y-2]--;
       continue;
      }
      if(a[j+x-y-1]==b[j-1])
      {
       a[j+x-y-1]=48;
      }
    }
    if(a[0]>48)
    printf("%s\n",a);
    else
    {
     for(i=1;i<x;i++)
     {
      printf("%c",a[i]);
     }
     printf("\n");
    }
   }    
     return 0;
}