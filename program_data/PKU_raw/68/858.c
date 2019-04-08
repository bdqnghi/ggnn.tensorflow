int main()
{
		int flag(int t);
		int i,j,n,sign=0;
		cin>>n;
		for(i=6;i<=n;i+=2,sign=0)
		{
			for(j=3;j<=n/2&&sign==0;j+=2)
				if(flag(j))
					if(flag(i-j))
						{cout<<i<<'='<<j<<'+'<<i-j<<endl;
						sign=1;
						}
		}

}

int flag(int t)
{
	int i,sign=0;
	if(t==3||t==5)
		return 1;
	else
		for(i=3;i<=sqrt(t)&&sign==0;i+=2)
			if(!(t%i))
				{return 0;
				sign=1;
				}


	if(sign==0)
		return 1;
}
