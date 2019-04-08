
int main(int argc, char *argv[])
{
  char a[1000]={'\0'},b[1000]={'\0'},c[1000]={'\0'};
  int n,i,j,m,k;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {  
        for(j=0;j<1000;j++)
        {
          c[j]='\0';
          a[j]='\0';
          b[j]='\0';
        }
         scanf("%s",a);
         scanf("%s",b);
         for(j=0;j<1000;j++)
         {
              if(a[j]=='\0')
              {
                   m=j;
                   break;
              }
         }
         for(j=0;j<1000;j++)
         {
              if(b[j]=='\0')
              {
                   k=j;
                   break;
              }
         }
        for(j=0;j<=k-1;j++)
        {
              c[j]=a[m-j-1]-b[k-j-1]+'0';
        }
        for(j=k;j<m;j++)
        c[j]=a[m-j-1];
        for(j=0;j<1000;j++)
        {
              if(c[j]<'0')
              {
                        c[j]=c[j]+10;
                        c[j+1]=c[j+1]-1;
              }
        }
        for(j=m;j>=0;j--)
        {
             if(c[j]>='1'&&c[j]<='9')
             break;
        }
        for(j=j;j>=0;j--)
        printf("%c",c[j]);
        printf("\n");
  }	
  return 0;
}
