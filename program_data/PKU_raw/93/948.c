int main()
{
    int t1,t2,t3;
    int n;
    cin>>n;
    if(n%3==0) t1=1;
    else t1=0;
    if(n%5==0) t2=1;
    else t2=0;
    if(n%7==0) t3=1;
    else t3=0;
    if(t1+t2+t3==1)
    {
        if(t1==1) cout<<3;
        if(t2==1) cout<<5;
        if(t3==1) cout<<7;   
                }
    else   if(t1+t2+t3==2)
            {
                 if(t1==0) cout<<5<<" "<<7;
                 if(t2==0) cout<<3<<" "<<7;
                 if(t3==0) cout<<3<<" "<<5;
            }
            else    if(t1+t2+t3==3) cout<<3<<" "<<5<<" "<<7;
                    else cout<<"n";
    return 0;
}
    
