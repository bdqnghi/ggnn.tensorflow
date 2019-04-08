int main()
{
    int w,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int b[12],sum=0;
    cin>>w;
    b[0]=(w+5)%7;     //???13???????0????? 
    for(int i=1;i<12;i++)
    {
            sum+=a[i-1];
            b[i]=(sum+12+w)%7;      //?i+1?????? 
    }
    for(int j=0;j<12;j++)
    {
            if(b[j]==5)  cout<<j+1<<endl;
    }
    return 0;
}