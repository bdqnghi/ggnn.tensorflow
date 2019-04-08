
void rowset(int a[][105],int n)
{
     int i,j;
     int min;
     for (i=0;i<=n-1;i++)
     {
         min=a[i][0];
         for (j=0;j<=n-1;j++)
             if (min>a[i][j])
             min=a[i][j];
         for (j=0;j<=n-1;j++)
             a[i][j]=a[i][j]-min;
     }
}

void lineset(int a[][105],int n)
{
     int i,j;
     int min;
     for (i=0;i<=n-1;i++)
     {
         min=a[0][i];
         for (j=0;j<=n-1;j++)
             if (min>a[j][i])
             min=a[j][i];
         for (j=0;j<=n-1;j++)
             a[j][i]=a[j][i]-min;
     }
}

void form(int a[][105],int n)
{
     int i,j,k;
     for (i=0;i<=n-1;i++)
     {
         for (j=2;j<=n-1;j++)
             a[i][j-1]=a[i][j];
     }
     for (j=0;j<=n-2;j++)
     {
         for (i=2;i<=n-1;i++)
             a[i-1][j]=a[i][j];
     }
}

int main(int argc, char *argv[])
{
  int n,i,j,k,flag;
  scanf("%d",&n);
  int a[n][105];
  int sum;
  flag=n;
  for (i=0;i<=n-1;i++)
  {
      sum=0;    
      for (j=0;j<=n-1;j++)
          for (k=0;k<=n-1;k++)
              scanf("%d",a[j]+k);
      flag=n;
      while (flag>=2)
      {
       rowset(a,flag);
       lineset(a,flag);
       sum+=a[1][1];
       form(a,flag);
       flag--;
       }
      printf("%d",sum);
       (i<=n-2)?printf("\n"):printf("");
  }	
  return 0;
}
       
