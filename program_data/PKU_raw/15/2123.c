
int main(int argc, char *argv[])
{
  int n,m,k=0,i,j;
  int *a;
  scanf("%d",&n);
  a=(int*)(malloc(n*sizeof(int)));
  for(i=0;i<n;i++) 
  {
   for(j=0;j<n;j++)
   scanf("%d",&a[j]);
   for(j=0;j<n;j++)
   {
      if(a[j]==0)
      break;
   }
   for(m=j+1;m<n;m++)
     {if(a[m]==0)
      {k=k+m-j-1;
      break;}
      }
   }
   printf("%d",k);	
  return 0;
}