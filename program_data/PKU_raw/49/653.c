int main()
{
	int i=0,x[510],y[510],e,f,count=0;
	char a[510],b;
	while (b!='\n')
	{
		cin.get(b);
		a[i++]=b;
	}//a????0?i-2?
	int j1,j2,j3;
	for (j1=2;j1<=i-1;j1++)//??
	{
		for (j2=0;j2<=i-3;j2++)
		{
			for (j3=0;j3<=j1-1;j3++)//?????????????
			{
				if (j2+j3<=i-2)
				e=a[j2+j3];
				f=a[j2+j1-1-j3];
				if (e==f)
					count++;
				if (count==j1)
				{
					for (int j4=j2;j4<=j2+j1-1;j4++)
						cout<<a[j4];
					cout<<'\n';
				}
			}
			count=0;
		}
	}
	return 0;
}