

int main()
{
    int m;                          //??m
    cin>>m;                        //??m
    int n[100];                    //????n
    int i,j;                       //??i,j
    double a=1,b=2,c,t,s=0;         //??a,b,c,t,s
    for(i=0;i<m;i++)
    {
        cin>>n[i];                 //????n
    for(j=0;j<n[i];j++)
    {
        c=b/a;
        s=s+c;
        t=b;
        b=a+b;
        a=t;                     //??s
    }
        printf("%.3lf\n",s);        //??s
        s=0;
        a=1;
        b=2;                       //s??
    }
    return 0;
}
