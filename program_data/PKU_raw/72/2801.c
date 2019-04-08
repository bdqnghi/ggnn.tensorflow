int main()
{
    int a[ROW][COL],m,n,k,i;
    scanf("%d%d",&m,&n);
    int b[N],c[N],j;
    for(k=0;k<m;k++){
        for(i=0;i<n;i++){
            scanf("%d",&(a[k][i]));
        }
    }
    for(k=0;k<m;k++){
        for(i=0;i<n;i++){
            if(k==0&&i==0)
            {
                if(a[k][i]>=a[k+1][i]&&a[k][i]>=a[k][i+1]) 
                printf("%d %d\n",k,i);
            }
            else if(k==0&&i==n-1)
            {
                if(a[k][i]>=a[k+1][i]&&a[k][i]>=a[k][i-1]) 
                printf("%d %d\n",k,i);
            }
            else if(k==m-1&&i==0)
            {
                if(a[k][i]>=a[k-1][i]&&a[k][i]>=a[k][i+1]) 
                printf("%d %d\n",k,i);
            }
            else if(k==m-1&&i==n-1)
            {
                if(a[k][i]>=a[k-1][i]&&a[k][i]>=a[k][i-1]) 
                printf("%d %d\n",k,i);
            }
            else if(i==0&&k>0&&k<m-1)
            {
                if(a[k][i]>=a[k-1][i]&&a[k][i]>=a[k][i+1]&&a[k][i]>=a[k+1][i]) 
                printf("%d %d\n",k,i);
            }
            else if(i==n-1&&k>0&&k<m-1)
            {
                if(a[k][i]>=a[k-1][i]&&a[k][i]>=a[k][i-1]&&a[k][i]>=a[k+1][i]) 
                printf("%d %d\n",k,i);
            }
            else if(k==0&&i>0&&i<n-1)
            {
                if(a[k][i]>=a[k][i+1]&&a[k][i]>=a[k][i-1]&&a[k][i]>=a[k+1][i]) 
                printf("%d %d\n",k,i);
            }
            else if(k==m-1&&i>0&&i<n-1)
            {
                if(a[k][i]>=a[k][i+1]&&a[k][i]>=a[k][i-1]&&a[k][i]>=a[k-1][i]) 
                printf("%d %d\n",k,i);
            }
            else 
            {
                if(a[k][i]>=a[k-1][i]&&a[k][i]>=a[k][i-1]&&a[k][i]>=a[k+1][i]&&a[k][i]>=a[k][i+1]) 
                printf("%d %d\n",k,i);
            }
        }
    }
   
    return 0;
}

