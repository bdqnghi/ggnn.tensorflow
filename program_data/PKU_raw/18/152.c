//???? 
int a[100][100];  //?? 
int jieguo(int n) //???? 
{
    int min=10000;
    int p=0,i=0,j=0,sum=0;
    if(n==2) 
    {
        for(i=0;i<n;i++)    
        {
            min=10000;
            for(j=0;j<n;j++)
            {
                if(min>a[i][j])
                {    min=a[i][j];}
            }
            for(j=0;j<n;j++)
            {
                a[i][j]=a[i][j]-min;
            }
        }
        for(i=0;i<n;i++)   //????? 
        {
            min=10000;
            for(j=0;j<n;j++)
            {
                if(min>a[j][i])
                {    min=a[j][i];}
            }
            for(j=0;j<n;j++)
            {
                a[j][i]=a[j][i]-min;
            }  
        }
        return a[1][1];
    }
    else
    {
        for(i=0;i<n;i++)    //????? 
        {
            min=10000;
            for(j=0;j<n;j++)
            {
                if(min>a[i][j])
                {    min=a[i][j];}
            }
            for(j=0;j<n;j++)
            {    a[i][j]=a[i][j]-min;}
        }
        for(i=0;i<n;i++)   //????? 
        {
            min=10000;
            for(j=0;j<n;j++)
            {
                if(min>a[j][i])
                {    min=a[j][i];}
            }
            for(j=0;j<n;j++)
            {    a[j][i]=a[j][i]-min;}  
        }
        sum=a[1][1];  //?????? 
        for(i=1;i<n-1;i++)   //n???n-1 
        {
            for(j=0;j<n;j++)
            {    a[i][j]=a[i+1][j];}
        }
        for(i=1;i<n-1;i++)
        {
            for(j=0;j<=n-1;j++)
            {    a[j][i]=a[j][i+1];}
        }
        return (sum+jieguo(n-1));
    }   
}
int main()
{
    int n=0,k=0,i=0,j=0;  
    for(i=0;i<100;i++)   
    {
        for(j=0;j<100;j++)
        {    a[i][j]=0;}
    } 
    cin>>n; 
    for(k=0;k<n;k++)   
    { 
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {    cin>>a[i][j];}
        }
        cout<<jieguo(n)<<endl;
    }
    return 0;
}