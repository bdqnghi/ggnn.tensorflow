int main()
{
	int i,j,n,n0=0,juzhen[102][102]={0},sum=0,minc[102]={0},minr[102]={0},lins=0;
	int (*p)[102]=juzhen,*pr=minr,*pc=minc;
	cin>>n;
	while(n0<n)
	{
		lins=0;
		sum=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)*(*(p+i)+j)=0;
			*(pr+i)=100000;
			*(pc+i)=100000;
		}
		for(i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				cin>>*(*(p+i)+j);
			}
		}
		while(lins<n-1)
		{
			for(i=0;i<n;i++)
			{
				*(pr+i)=100000;
				*(pc+i)=100000;
			}
			for(i=0;i<n-lins;i++)
			{
				for (j=0;j<n-lins;j++)
				{
					if(*(*(p+i)+j)<minr[i]) *(pr+i)=*(*(p+i)+j);
				}
			}
			for(i=0;i<n-lins;i++) 
			{
				for (j=0;j<n-lins;j++)
				{
					*(*(p+i)+j)-=*(pr+i);
				}
			}
			for(j=0;j<n-lins;j++)
			{
				for (i=0;i<n-lins;i++)
				{
					if(*(*(p+i)+j)<*(pc+j)) *(pc+j)=*(*(p+i)+j);
				}
			}
			for(j=0;j<n-lins;j++) 
			{
				for (i=0;i<n-lins;i++)
				{
					*(*(p+i)+j)-=*(pc+j);
				}
			}
			sum+=*(*(p+1)+1);

			for(i=2;i<n-lins;i++)
			{
				for(j=0;j<n-lins;j++)*(*(p+i-1)+j)=*(*(p+i)+j);
			}
			for(j=2;j<n-lins;j++)
			{
				for(i=0;i<n-lins;i++)*(*(p+i)+j-1)=*(*(p+i)+j);
			}
			lins++;
			
		}
		cout<<sum<<endl;
		n0++;
	}
	return 0;
}