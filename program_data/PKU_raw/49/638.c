int main()
{
	char str[502]={0};
	int i=1,j,n;
	while(true)
	{
		str[i]=getchar();
		if(str[i]=='\n')
			break;
		i++;
	}
	n=i-1;
	int z=0,a,b,c;
	for(j=1;j<=n;j=j+2)
	{
		for(i=1;i<=n;i++)
		{
			z=0;
			a=i;
			b=j;
			while((a+b)>a&&(a+b)<=n)
			{
				if(str[a]==str[a+b])
				z=z+1;
				a++;
				b=b-2;
			}
			if(z==(j+1)/2)
			{
				for(c=i;c<=i+j;c++)
					cout<<str[c];
				cout<<endl;
			}

		}
	}		
		return 0;
}
