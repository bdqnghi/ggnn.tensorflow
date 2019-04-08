int main()
{
	char b[50][50]={'\0'};
	memset(b,0,2500*sizeof(char));
	int i=0,j=0,count=0;
	char c = getchar();
	while('\n' != c)
	{
		if(' ' == c)
		{
			i++;
			j = 0;
		}
		else
		{
			b[i][j++] = c;
		}
		c = getchar();
	}
	//for(i=0;b[i-1][j-1]!='\n';i++)
	//{
	//	count++;
	//	for(j=0;(b[i][j-1]!=' ')&&(b[i][j-1]!='\n');j++)
	//	{
	//		b[i][j]=getchar();//????????????????????
	//	}
	//}
	count = i+1;
	for(i=count-1;i>=1;i--)
	{
		for(j=0;b[i][j] != '\0';j++)
		{
			//if(b[i][j]=='\n')
			//{
			//	cout<<" ";break;
			//}
			//else
			//{
			cout<<b[i][j];
			//if(b[i][j]==' ')
			//{ break;}
			//}

		}
		cout<<" ";
	}
	for(j=0;b[0][j]!='\0';j++)
		cout<<b[0][j];//????


	return 0;
}