int main()
{
	int begin[10000]={' '},end[10000]={' '};			//begin and end array:record time
	int sum[10000]={' '};			//record amount of the people present at the same time
	int max_sum=0;
	int num_sum=0;
	char b[10]={' '};
	int i,j=0;		//cyclic variable
	char a[10000]={' '};			//read input
	char a1[10000]={' '};
			//next thirteen lines get the input
	cin.getline(a,10000);
	int length=strlen(a);
	for(i=0;i<=length;i++)
	{
		if((a[i]<='9')&&(a[i]>='0'))
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			begin[num_sum]=atoi(b);
			num_sum++;
			for(int k=0;k<j;k++)
				b[k]='\0';
			j=0;
		}
	}
	num_sum=0;
	cin.getline(a1,10000);
	int length1=strlen(a1);
	for(i=0;i<=length1;i++)
	{
		if((a1[i]<='9')&&(a1[i]>='0'))
		{
			b[j]=a1[i];
			j++;
		}
		else
		{
			end[num_sum]=atoi(b);
			num_sum++;
			for(int k=0;k<j;k++)
				b[k]='\0';
			j=0;
		}
	}
	for(i=1;i<10000;i++)
		for(j=0;j<num_sum;j++)
			if((i>=begin[j])&&(i<end[j]))
				sum[i]++;

	for(i=1;i<10000;i++)
		if(sum[i]>max_sum)
			max_sum=sum[i];
	cout<<num_sum<<' '<<max_sum;
	return 0;
}