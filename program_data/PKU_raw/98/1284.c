int main()
{
    int n;
    char c[450][50];
    int sum[450]={0},b[450];
 
    
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        b[i]=strlen(c[i]);
    }
    sum[0]=b[0]+1;
    sum[1]=sum[0]+b[1]+1;
    cout<<c[0]<<" ";
    for(int i=1;i<n;i++)
    {
        sum[i]=sum[i-1]+b[i]+1;
        sum[i+1]=sum[i]+b[i+1]+1;
       
        if(sum[i]> 81 &&sum[i-1]<=81)
        {
            cout<<endl;
            cout<<c[i]<<" ";
            sum[i]=b[i]+1;
        }
        else if(sum[i]<=81&&sum[i+1]>81) cout<<c[i];
        else if(i==n-1) cout<<c[i]<<endl;  
        else
        {
            cout<<c[i]<<" ";
        }  
    }

     return 0;       
                    

}
