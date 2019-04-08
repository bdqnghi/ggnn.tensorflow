int main()
{
    int n,q,i,m,j;
    double p,w[1200],s,*x;
    x=&*w;
    cin>>n;
    for(i=1;i<=n;i++)
    {
		s=0;
		p=0;
		cin>>m;
		for(j=0;j<=m-1;j++)
		{
			cin>>*(x+j);
			p=*(x+j)+p;
		}
		p=p/m;
		for(j=0;j<=m-1;j++)
		{
			s=s+(*(x+j)-p)*(*(x+j)-p);
		}
		s=s/m;
		s=sqrt(s);
		printf("%.5f\n",s);
	}
  
	
	

    cin>>q;
    return 0;
}
