int sum=0,len=0,maxn=0;
char times[10001]={0};
char inch[1001][5],outch[1001][5];
int in[2001],out[1001],sch[1001]={0};
int main()
{
    int i,j=0,k=0;
    memset(times,0,sizeof(times));
    cin>>times;
    while(times[len]) len+=1;
    for(i=0;i<len;++i)
    {
            if(isdigit(times[i]))
            {
                    inch[j][k]=times[i];
                    k++;
            }
            else
            {
                    j++;
                    k=0;
            }
    }
    len=0;
    j=0;
    k=0;
    memset(times,0,sizeof(times));
    cin>>times;
    while(times[len]) len++;
    for(i=0;i<len;++i)
    {
            if(isdigit(times[i]))
            {
                    outch[j][k]=times[i];
                    k++;
            }
            else
            {
                    j++;
                    k=0;
            }
    }
    sum=j+1;
    for(i=0;i<sum;++i)
    {
            in[i]=atoi(inch[i]);
            out[i]=atoi(outch[i]);
    }
    for(i=0;i<sum;++i)
    {
            for(j=in[i];j<out[i];++j)
            {
                    sch[j]++;
            }
    }
    for(i=0;i<1001;++i) if(sch[i]>maxn) maxn=sch[i];
    cout<<sum<<" "<<maxn<<endl;
    return 0;
}
    
                    
    
    
