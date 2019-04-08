int main()
{
	int x[1001],y[1001],peak[1001],peak2[1001],sum,tmp,min=0,max=0;
	char coma[1001];
	int i,j,k,time;
	for(i=0;i<1001;i++)
	{
		peak[i]=0;
		x[i]=0;
		y[i]=0;
	}
	for(i=0;;i++)
	{
		cin>>x[i];		
		if(cin.get()!=',')
		{
			sum=i+1;
			break;
		}

	}
	for(j=0;j<sum;j++)
	{
		cin>>y[j];
		cin.get(coma[j]);
	}
	
	for(k=0; k<=1001 ;k++)
	{
		for(i=0;i<sum;i++)
		{
			if(x[i]<=k && k<y[i])
			{
				peak[k]++;
			}
		}
		//cout<<peak[k]<<' ';
	}
//	for(k=min; k<=max ;k++)
//	{
//		cout<<peak[k]<<' ';
//	}
	for(i=0;i<1000;i++)
	{
		for(j=0;j<1000-i;j++)
		{
			if(peak[j]<peak[j+1])
			{
				tmp=peak[j];
				peak[j]=peak[j+1];
				peak[j+1]=tmp;
			}
		}
	}
	cout<<sum<<' '<<peak[0]<<endl;
	return 0;
}