int jilu[100];

int main()
{

    memset(jilu,0,sizeof jilu);
    int total,i;
    cin>>total;

    for(i=1;i<=total;i++)
    {
        int a[20];
        memset(a,0,sizeof a);
        int n,j;
        cin>>n;
        if(n==0) jilu[i]=60;
        else
        {
            for(j=1;j<=n;j++) cin>>a[j];
            if(a[1]>=60) jilu[i]=60;
            else
            {
                int time;
                for(j=1;j<=n;j++)
                {
                    time=a[j]+3*j;
                    if(a[j]<60&&a[j]+3*j>60)
                    {
                        jilu[i]=a[j];
                        break;
                    }
                    else if(time<60&&(a[j+1]+3*j>60)) break;
                }
                if(j<=n)
                {
                    if((60-time>a[j+1]-a[j])&&a[j+1]>0) jilu[i]=a[j+1];
                    else if(a[j]<60&&a[j]+3*j>60);
                    else jilu[i]=60-3*j;
                }
                else jilu[i]=63-3*j;

            }

        }


    }
    for(i=1;i<=total;i++) cout<<jilu[i]<<endl;


    return 0;
}
