int main()
{
	char c[100][100],v;
	int i;
	for(i=0;i<100;i++)
	{
		for(int j=0;j<100;j++)
		{
			v=getchar();
			if((v==' ')||(v=='\n'))
			break;
			else
			c[i][j]=v;
		}
		if(v=='\n')
		break;
	}
	for(int k=i;k>=0;k--)
	{
		if(k==i)
		cout<<c[k];
		else
		cout<<' '<<c[k];
	}
	return 0;
}
