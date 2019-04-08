


int main()
{
	struct person
	{
		int rs;
		int brs;
	}p[10000];

	int n;
	int i,j,k,l,m,q;
	cin>>n;
	int t1=0,t2=1;
	for(i=0;t1!=t2;i++)
	{
		cin>>t1>>t2;
		p[i].rs=t1;
		p[i].brs=t2;
	}


	
	int flag,out=0;
	int record[10000];
	for(j=0;j<=n-1;j++)
	{
		flag=1;
		for(k=0;k<=i-2;k++)
		{
			if(p[k].rs==j)
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
			continue;
		for(q=0;q<=n-1;q++)
		{
			record[q]=0;
		}
		for(l=0;l<=i-2;l++)
		{
			if(p[l].brs==j)
			{
				record[p[l].rs]=1;
			}
		}
		
		for(m=0;m<=n-1;m++)
		{
			if(m==j)
				break;
			if(record[m]==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			cout<<j<<endl;
			out=1;
		}
	}
	if(out==0)
		cout<<"NOT FOUND"<<endl;
		

	return 0;
}