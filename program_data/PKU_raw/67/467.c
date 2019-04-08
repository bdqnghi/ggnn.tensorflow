int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		double a, b;
		int x, y;
			cin>>x>>y;
			if(i == 1)
			{
				b=(double)y/x;
			}
			else
			{
				if(i!=1)
				{
					a=(double)y/x;
					if((a-b)>0.05)
					{
						cout<<"better"<<endl;
					}
					else
					{
						if((b-a)>0.05)
						{
							cout<<"worse"<<endl;
						}
						else
						{
							cout<<"same"<<endl;
						}
					}
				}
			}
	}
return 0;
}