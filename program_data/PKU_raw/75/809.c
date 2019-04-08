int main()
{
    char in[5010];  //???? 
    char out[5010];  //???? 
    int num=0;   //??? 
    int x[1500];
    int y[1500];
    int time[1000];
    for(int i=0;i<1000;i++)
    {
        x[i]=0;
        y[i]=0;
        time[i]=0;
    }
    cin>>in>>out;
    int lenin=strlen(in);
    int lenout=strlen(out);
    in[lenin]=',';   out[lenout]=',';
    int p=lenin;   //???? 
    //cout<<p<<endl;
    int q=lenout;
    //cout<<q<<endl;
    int i=0;    //????  
    int k=0;
    while(p>=0)
    {
        if(in[p]==',')
        {
            i=p-1;
            {
                while(in[i]!=','&&i!=-1)
                {
                    x[k]=x[k]+(int)(in[i]-'0')*(int)(pow(10.0,(double)(p-1-i)));
                    i--;
                }
                p=i;
                k++;
            }
        }
    }
    k=0;
    while(q>=0)
    {
        if(out[q]==',')
        {
            i=q-1;
            {
                while(out[i]!=','&&i!=-1)
                {
                    y[k]=y[k]+(int)(out[i]-'0')*(int)(pow(10.0,(double)(q-1-i)));
                    i--;
                }
                q=i;
                k++;
            }
        }
    }
    num=k;   cout<<num<<" ";    // ?????? 
    /*
    for(i=0;i<num;i++)
    {
        cout<<x[i]<<" "<<y[i]<<endl;
    }
    */
    //????????????
    int maxe=0;
    for(i=0;i<1000;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(i>=x[j]&&i<y[j])    time[i]++;
            
        }
        if(maxe<time[i])
        {
            maxe=time[i];
        }
        
    }
    cout<<maxe<<endl;
    return 0; 
       
}

