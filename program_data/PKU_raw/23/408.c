int main()
{
	char a[120];
	
	char b[100][100];
	int i=0,sum=1,j=0,k=-1;
	cin.getline(a,120);
	for(i=0;i<120;i++)
		if(a[i]==' ')
			sum++;
	for(i=0;i<sum;i++)
		for(j=0;j<100;j++)
		{k++;
		if(a[k]!=' ')
			b[i][j]=a[k];
		else
		{
			b[i][j]='\0';
	         break;
		}
		}
		for(i=sum-1;i>=0;i--)
			if(i==0)
			cout<<b[i]<<endl;
			else
				cout<<b[i]<<" ";
		return 0;
}

