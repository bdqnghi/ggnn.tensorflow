int main()
{
	int a[16]={0}, i=0, j=0, n=0, num, k=0, m;
	do
	{
		cin>>a[0];
		if(a[0]==-1)
			break;

		for (i=1;i<16;i++)
		{
			cin>>a[i];
			if(a[i]==0)
				break;
		}	
	
		n=0;
		for(k=0;k<i;k++)
			for(j=0;j<i;j++)
			{
				if(a[k]==2*a[j])
					n++;
			}
			cout<<n<<endl;
	}
	while(1);
return 0;
}

			
			
	