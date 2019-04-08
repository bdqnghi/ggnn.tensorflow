int main()
{
	char a[100][100]={0};
	int i=0,k=0,x=0,y=0;
	for(i=0;;i++)
	{
		for(k=0;a;k++)
		{
			a[i][k]=getchar();
			if(a[i][k]==' '||a[i][k]=='\n')
				break;
		}
		if(a[i][k]=='\n')
			break;
	}

	for(x=0;x<=i;x++)
	{
		for(y=0;x>=0;y++)
		{
			if(a[i-x][y]!=32&&a[i-x][y]!='\n')
			cout<<a[i-x][y];
			else 
				break;
		}
		if(x<i)
		cout<<" ";
	}
	return 0;
}
