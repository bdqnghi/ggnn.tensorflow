//#include <fstream>

int n;
int a[61],b,q[61];
int main()
{
   // ifstream cin("in.txt");
    int i,j,k,t,sum,c;
    cin>>n;
    for(i=0;i<n;++i)
    {
                    t=60;
                    k=0;
                    c=0;
                    sum=0;
                    memset(a,0,sizeof(a));
                    cin>>b;
                    for(j=0;j<b;++j) {cin>>a[j]; q[j]=a[j];}
                    if(b==0) cout<<60<<endl;
                    else
                    {
                        if(a[0]>=60)
                        {
                                    cout<<60<<endl;
                                    continue;
                        }
                        for(j=0;j<b;++j)
                        {
                                        a[j]+=j*3;
                                        //cout<<a[j]<<endl;
                        }
                        for(j=0;j<b;++j)
                        {
                                        if(a[j]>=60)
                                        {
                                                   sum=a[j-1]-((j-1)*3);
                                                   t-=a[j-1];
                                                   c=1;
                                                   break;
                                        }
                        }
                        if(c)
                        {
                             if(t>3) sum+=t-3;
                        }
                        else
                        {
                            sum=q[b-1];
                            t-=a[b-1];
                            if(t>3) sum+=t-3;
                        }
                        cout<<sum<<endl;
                    }
                        /*
                        while(t>a[k])
                        {
                                     if(k==b) break;
                                     t-=a[k];
                                     k++;
                                     sum+=a[k-1];
                                     cout<<sum<<endl;
                                     t-=3;
                                     cout<<t<<endl;
                        }
                        if(k==b) sum+=t;
                        else
                        {
                            t-=3;
                            cout<<sum<<endl;
                            if(t>0) sum+=t;
                        }
                        cout<<sum<<endl;
                        */
    }
 //   cin>>b;
    return 0;
}
