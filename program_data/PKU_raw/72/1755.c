void sort (int *data,int n)
{
     int i,j,*min,t;
     for (i=0;i<n;i++)
     {
         min=data+i;
         for (j=i;j<n;j++)
         {
             if (*(data+j)<*min)
             min=data+j;
         }
         t=*(data+i);
         *(data+i)=*min;
         *min=t;
     }
}
int main ()
{
    int n,m,s=0,c=0,j,i,k=0;
    scanf("%d %d",&m,&n);
    int a[m+2][n+2],b[500];
    
    for (i=0;i<m+2;i++)
    {
        for (j=0;j<n+2;j++)
        {
            a[i][j]=0;
        }
    }
    for (i=0;i<=500;i++)
    {
        b[k]=0;
    }
    for (i=1;i<m+1;i++)
    {
        for (j=1;j<n+1;j++)
        {
            scanf("%d",&a[i][j]);
            
        }
    }
    for (i=1;i<m+1;i++)
    {
        for (j=1;j<n+1;j++)
        {
            if (a[i+1][j]<=a[i][j]&&a[i-1][j]<=a[i][j]&&a[i][j+1]<=a[i][j]&&a[i][j-1]<=a[i][j])
            {
               b[k]=100*i+j;
               k++;
            }
        }
    }
    
    sort (b,k);
    for (i=0;i<k;i++)
    {
        printf ("%d %d\n",b[i]/100-1,b[i]%100-1);
    }
    

    return 0;
    
}
