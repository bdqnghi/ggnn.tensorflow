
    int judge(float x)
    {
        int i,m,x1;
        if(x==3||x==5||x==7)
        return(1);
        else
        {
        m=(int)sqrt(x);
        x1=(int)x;
        for(i=3;i<=(m/2*2+1);i=i+2)
        {
        if(x1%i==0)
        return(0);
        }
        return 1;
        }
    }
    int main()
    {
        int num;
        float p;
        cin>>num;
        for(p=3;p<=num/2;p=p+2)
        {
                             if(judge(p)&&judge(num-p))
                             cout<<p<<' '<<num-p<<endl;
        }
        
        return 0;
}
        
