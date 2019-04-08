int main()
{
    int i,n;
    cin>>n;
    double a[n],b[n];//a????b???? 
    double c[n];//???????? 
    for(i=0;i<n;i++)
    {
                    cin>>a[i]>>b[i];
                    c[i]=b[i]/a[i];
    }
    for(i=1;i<n;i++)
    {
                    if(c[i]-c[0]>0.05)
                    {
                                      cout<<"better"<<endl;
                    }//??y-x??5%??????
                    else if(c[0]-c[i]>0.05)
                    {
                                      cout<<"worse"<<endl;
                    }//??x-y??5%??????
                    else 
                    {
                                      cout<<"same"<<endl;
                    }//?????????
    }
    return 0;
}
