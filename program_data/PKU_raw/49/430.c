
int main(int argc, char *argv[])
{
  int i,j,k,n=0;
  char a[500]={'\0'};
  gets(a);
  for(i=0;i<500;i++)
  {if(a[i]=='\0')
   {
     n=i;
     break;
   }
  }
  for(i=1;i<n;i++)
  {
      for(j=0;j+i<n;j++)
      {
            for(k=j;k<=j+i;k++)
            {
                 if(a[k]!=a[2*j+i-k])
                 break;
            }
            if(k==j+i+1)
            {
            for(k=j;k<=j+i;k++)
                printf("%c",a[k]);
            printf("\n");
            }
      }
  }
  return 0;
}
