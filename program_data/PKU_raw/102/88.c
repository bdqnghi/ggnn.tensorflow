int main()
{
	int n,sum1=0,sum2=0,i;
	double data1[50],data2[50],temp;
	char mark[10];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>mark;
		if(strcmp(mark,"male")==0)
		{
			cin>>data1[sum1++];
		}
		else{cin>>data2[sum2++];}
	}
	sort(data1,data1+sum1);
	sort(data2,data2+sum2);
	for(i=0;i<sum2/2;i++)
	{
		temp=data2[i];
		data2[i]=data2[sum2-1-i];
		data2[sum2-1-i]=temp;
	}
	printf("%.2f",data1[0]);
	for(i=1;i<sum1;i++)
	{
		printf(" %.2f",data1[i]);
	}
	for(i=0;i<sum2;i++)
	{
		printf(" %.2f",data2[i]);
	}
	cout<<endl;
	return 0;
}