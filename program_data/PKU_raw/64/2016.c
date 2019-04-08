struct zz
{
    float key;
    int num1,num2;    
}a[1005]={0,0,0},va;
int main()
{
    int n;

    cin>>n;
    float x[n+5],y[n+5],z[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i]>>z[i];
    }   
    for(int i=0,k=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            a[k].key=sqrt( (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]) + (z[i]-z[j])*(z[i]-z[j]) );
            a[k].num1=i;
            a[k].num2=j;
            k=k+1;
        }
    }
    
    for(int i=0;i<(n-1)*n/2-1;i++)
    {
        for(int j=0;j<(n-1)*n/2-1-i;j++)
        {
            if(a[j].key<a[j+1].key || (a[j].key == a[j+1].key && a[j].num1 > a[j+1].num1) || (a[j].key == a[j+1].key && a[j].num1 == a[j+1].num1 && a[j].num2 > a[j+1].num2))
            {
                va=a[j];
                a[j]=a[j+1];
                a[j+1]=va;
            }
        }
    }
    for(int i=0;i<(n-1)*n/2;i++)
        printf("(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2f\n",x[a[i].num1],y[a[i].num1],z[a[i].num1],x[a[i].num2],y[a[i].num2],z[a[i].num2],a[i].key);
                        
    return 0;	
}
