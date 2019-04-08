int main ()
{
	char A[100][100]={'\n'};
	char c;
	int i=1;
	int j=1;
	while(c=cin.get())
	{
		if(c==' ')
		{
			j=1;
			i++;
			continue;
		}
		if(c=='\n')
		{
			break;
		}

		A[i][j]=c;
		j++;
		

	}

		
	for(int t=i;t>1;t--)
	{
		for(int j=1;j<100;j++)
		{
		  if(A[t][j]!='\0')
		  {
		    cout<<A[t][j];
		  }
		  if(j==99)
		  {
			  cout<<' ';
		  }

		}

	}
	for(int j=1;j<100;j++)
	{
		 if(A[1][j]!='\0')
		  {
		    cout<<A[1][j];
		  }

	}
	
	return 0;
}
	
