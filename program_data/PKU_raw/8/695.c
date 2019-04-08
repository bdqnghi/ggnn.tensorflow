
int a[2][11]={0};
int geshu1,geshu2;
int hanshu1()
{
	int i;
	cin>>geshu1>>geshu2;
	for(i=0;i<geshu1;i++)cin>>a[0][i];
	for(i=0;i<geshu2;i++)cin>>a[1][i];
	return 0;
	
}
int hanshu2()
{
	int i,j,k;
	for(i=geshu1-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[0][j]>a[0][j+1])
			{
				k=a[0][j];a[0][j]=a[0][j+1];a[0][j+1]=k;
			}
		}
	}
	for(i=geshu2-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[1][j]>a[1][j+1])
			{
				k=a[1][j];a[1][j]=a[1][j+1];a[1][j+1]=k;
			}
		}
	}
	return 0;
}
int hanshu3()
{
	int i;
	for(i=0;i<geshu2;i++)a[0][geshu1+i]=a[1][i];
	return 0;
}
int hanshu4()
{
	int i;
	cout<<a[0][0];
	for(i=1;i<geshu1+geshu2;i++)cout<<" "<<a[0][i];
	return 0;
}
int main()
{
	hanshu1();
	hanshu2();
	hanshu3();
	hanshu4();
	return 0;
}