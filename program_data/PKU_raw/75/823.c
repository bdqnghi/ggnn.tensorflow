int main()
{
    int start[1000];
    int end[1000];
    int time[1024];
    int n=0,i=0;
    for(i=0;;i++)//?????????‘?’ 
    {
       n++;
       cin>>start[i];
       char c=cin.get();
       if(c!=',')
            break;
    }
    for(i=0;;i++)
    {
       cin>>end[i];
       char c=cin.get();
       if(c!=',')
          break;
    }
    for(i=0;i<1024;i++)
       time[i]=0;
    for(i=0;i<n;i++)//?????? 
    {
       for(int j=start[i];j<end[i];j++)
          time[j]++;
    }
    int max=0;
    for(i=0;i<1024;i++)//????????? 
    {
       if(max<time[i])
            max=time[i];
    }
    cout<<n<<" "<<max<<endl;
}