
int main()
{
    double ans[1001][3];
	int i,n;
	float dt,a,b,c;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a>>b>>c;
		dt=b*b-4*a*c;
		if(dt==0)
		{
			ans[i][2]=0;
			ans[i][0]=(-b+sqrt(dt))/a/2;
		}
		else if(dt>0)
		{
						
			ans[i][2]=-1;
			ans[i][0]=(-b+sqrt(dt))/a/2;
			ans[i][1]=(-b-sqrt(dt))/a/2;
		}
		else
		{
			ans[i][2]=-2;
			ans[i][0]=-b/a/2;
			ans[i][1]=sqrt(-dt)/a/2;
		}
	}
	for  (i=1;i<=n;i++)
	{
		if (ans[i][2]==0)
		{
			cout<<fixed;
		    cout<<setprecision(5)<<endl<<"x1=x2="<<ans[i][0];
		}
		else if(ans[i][2]==-1)
		{
			cout<<fixed;
		    cout<<setprecision(5)<<endl<<"x1="<<ans[i][0]<<";"<<"x2="<<ans[i][1];
		}
		else
		{
			if(ans[i][0]!=0)
			{
		    cout<<fixed;
		    cout<<setprecision(5)<<endl<<"x1="<<ans[i][0]<<"+"<<ans[i][1]<<"i"<<";"<<"x2="<<ans[i][0]<<"-"<<ans[i][1]<<"i";
			}
			else
			{
				cout<<fixed;
		        cout<<setprecision(5)<<endl<<"x1="<<"0.00000"<<"+"<<ans[i][1]<<"i"<<";"<<"x2="<<"0.00000"<<"-"<<ans[i][1]<<"i";
			}

		}
	}
	return 0;
}
