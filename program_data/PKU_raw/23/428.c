int main()
{
	char letter[101];
	int i=0;
	while(true)
	{
		letter[i]=getchar();
		if(letter[i]=='\n')//??????
			break;
		i++;
	}
	int m,n,j,z;
	z=i-1;//?????
	for(j=z;j>=0;j--)
	{
		if(letter[j]==' ')//?????
		{
			for(m=j+1;m<=z;m++)
				cout<<letter[m];//??????????
			cout<<" ";
			z=j-1;
		}
	}
	for(n=0;n<=z;n++)//???????
		cout<<letter[n];
		return 0;
}
