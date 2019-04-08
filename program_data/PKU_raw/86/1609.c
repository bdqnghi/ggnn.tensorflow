int main()
{
	int n,m,c,t,u[60],i;
	cin>>n;
	while (n>0)
		{
			cin>>m;
			c=0;t=-3;u[0]=0;
			for (i=1;i<=m;i++) cin>>u[i];

			for (i=1;i<=m;i++)
					if (u[i]-u[i-1]+t+3<=60)
						{
							t=u[i]-u[i-1]+t+3;
							c=u[i];
					  }
					else break;
					t=t+3;
			if (t<60) c=c+60-t;
			cout<<c<<endl;
			n--;
	  }
return 0;
}
