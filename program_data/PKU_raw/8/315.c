int n,m;
int main()
{
    void shuru(int x[],int y[]);
    void paixu(int x[],int y[]);
    void hebin(int x[],int y[]);
    void shuchu(int x[]);
    int a[200],b[100];
    shuru(a,b);paixu(a,b);hebin(a,b);shuchu(a);
    return 0;
}
void shuru(int x[],int y[])     //?????? 
{
     int i;
     cin>>n>>m;
     for(i=0;i<n;i++)cin>>x[i];
     for(i=0;i<m;i++)cin>>y[i];    
}
void paixu(int x[],int y[])    //?? 
{
     int i,j,temp;
     for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        if(x[i]>x[j]){temp=x[i];x[i]=x[j];x[j]=temp;}
     for(i=0;i<m-1;i++)
        for(j=i+1;j<m;j++)
        if(y[i]>y[j]){temp=y[i];y[i]=y[j];y[j]=temp;}
}
void hebin(int x[],int y[])    //?? 
{
     int i,j;
     for(i=n,j=0;i<n+m;i++,j++)
       x[i]=y[j];
}
void shuchu(int x[])           //?? 
{
     for(int i=0;i<n+m-1;i++)
     cout<<x[i]<<' ';
     cout<<x[n+m-1];
     
}
