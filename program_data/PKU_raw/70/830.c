int main()
{
    int n,p,q;
    double x[1000],y[1000],temp[1000];
    cin>>n;
    for (p=1;p<=n;p++)
	{
cin>>x[p]>>y[p];
	}
    double dis;
    dis=0;
    int t;
    t=1;
    for(p=1;p<=n;p++)
	{
    for(q=1;q<=n;q++)
	{
temp[t]=sqrt((x[p]-x[q])*(x[p]-x[q])+(y[p]-y[q])*(y[p]-y[q]));
    if (dis<temp[t])
       dis=temp[t];
    t=t+1;
	}
	}
     printf("%.4f\n",dis);
     return 0;
}

