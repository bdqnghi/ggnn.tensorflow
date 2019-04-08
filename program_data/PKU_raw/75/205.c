

int main ()
{
	int i,j,m,max=0,a[1001]={0},b[1001]={0},sum[1001]={0},count=0;

	char ch;

	while(1)
	{
		cin >> a[count] ;
		count ++ ;
		ch=cin.get();
		if (ch!=',')
		{
			break ;
		}
	}
	count=0;
	while(1)
	{
		cin >> b[count] ;
		count++;
		ch=cin.get();
		if (ch!=',')
		{
			break ;
		}
	}
	for (i=0;i<count;i++)
	{
		for (j=a[i];j<b[i];j++)
		{
			sum[j]++;
		}
	}
	for (i=1;i<=1000;i++)
	{
		if (sum[i]>max)
			max=sum[i];
	}
	cout <<count<<" "<<max<<endl;


	return 0;
}