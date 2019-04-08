int main ()
{
	int n,i=0,j=0,sum=0;
	int a[10][10]={0};
	cin >>n;
	while(i<=9)
	{
		while(j<=9)
		{
			if((i==7)||(j==7)||(i*10+j)%7==0)
				a[i][j]=0;
			else a[i][j]=i*10+j;
			sum=sum+a[i][j]*a[i][j];
			j++;
			if (i*10+j>n)
				break;
		}
		if(i*10+j>n)
			break;
		j=0;
		i++;
	}
	cout <<sum <<endl;
	return 0;
}