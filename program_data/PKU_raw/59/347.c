int main()
{
	int n,i,j,m,sum,k,p,q;
	
	scanf("%d",&n);
	
	char a[100][100];
	char b[100][100];
	char zds;
	

	//?? 
	scanf("%c",&zds);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%c",&a[i][j]);
    	scanf("%c",&zds);
	}



	scanf("%d",&m);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			b[i][j]=a[i][j];
	}


	
	
	//??m-1?
	for(k=1;k<m;k++)
	{
		for(p=0;p<n;p++)
		{
			for(q=0;q<n;q++)
			{
				if(q>0 && q<n && b[p][q]=='.' && b[p][q-1]=='@')
					a[p][q]='@';

				else if(q>=0 && q<n-1 && b[p][q]=='.' && b[p][q+1]=='@')
					a[p][q]='@';

				else if(p>0 && p<n && b[p][q]=='.' && b[p-1][q]=='@')
					a[p][q]='@';

				else if(p>=0 && p<n-1 && b[p][q]=='.' && b[p+1][q]=='@')
					a[p][q]='@';


				else
					a[p][q]=a[p][q];
			}
		}

		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				b[i][j]=a[i][j];
		}

	}


	
	sum=0;

	//??
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
				if(a[i][j]=='@')
					sum++;
		}
	}





	//??
	printf("%d",sum);

	return 0;
}