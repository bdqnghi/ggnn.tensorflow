int main()
{
    int shuzu[100000],n,num,i,j,count;
    cin>>n;//??????? 
    for(i=0;i<n;i++)cin>>shuzu[i];//??????? 
    cin>>num;//??????? 
    for(i=0;i<n;i++)
    {
                    count=0;
                    if(shuzu[i]==num)
                    {
                                     for(j=i+1;j<n;j++)shuzu[j-1]=shuzu[j];
                                     count++;
                                     if(shuzu[i]==num)i--;
                    }//???????????????????? 
                    n=n-count;//?????????? 
    }
for(i=0;i<n;i++)
{
                cout<<shuzu[i];
                if(i<n-1)cout<<" ";
}
cin.get();cin.get();cin.get();cin.get();cin.get();cin.get();
return 0;
}
