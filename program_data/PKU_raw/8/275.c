int num1[1000],num2[1000],num[2000],n1,n2;
void dr()
{
    cin>>n1>>n2;
    int i;
    for(i=0;i<n1;i++)
    cin>>num1[i];
    for(i=0;i<n2;i++)
    cin>>num2[i];
}
int px()
{
    int i,j,tem;
    for(i=0;i<n1;i++)
    {
        for(j=i+1;j<n1;j++)
        {
            if(num1[j]<num1[i])
            {
                tem=num1[i];
                num1[i]=num1[j];
                num1[j]=tem;
            }
        }
    }
    for(i=0;i<n2;i++)
    {
        for(j=i+1;j<n2;j++)
        {
            if(num2[j]<num2[i])
            {
                tem=num2[i];
                num2[i]=num2[j];
                num2[j]=tem;
            }
        }
    }
}
int gb()
{
    int i;
    for(i=0;i<n1;i++)
    num[i]=num1[i];
    for(i=n1;i<n1+n2;i++)
    num[i]=num2[i-n1];
}
int dy()
{
    cout<<num[0];
    int i;
    for(i=1;i<n1+n2;i++)
    cout<<' '<<num[i];
}
int main()
{
    dr();
    px();
    gb();
    dy();
}
