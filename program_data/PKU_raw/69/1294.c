
int main()
{
	char num1[251],num2[251];
	int i,len1,len2;
	int num_sum[251];
	for(i=0;i<251;i++)
		num_sum[i]=0;

	cin>>num1;
	cin>>num2;
	len1=strlen(num1);
	len2=strlen(num2);
	char temp_char;
	for(i=0;i<len1/2;i++)
	{
		temp_char=num1[i];
		num1[i]=num1[len1-1-i];
		num1[len1-1-i]=temp_char;
	}
	num1[len1]='\0';
	for(i=0;i<len2/2;i++)
	{
		temp_char=num2[i];
		num2[i]=num2[len2-1-i];
		num2[len2-1-i]=temp_char;
	}
	num2[len2]='\0';
//	cout<<num1<<endl;
//	cout<<num2<<endl;
	if(len1>=len2) 
	{
		for(i=0;i<len2;i++)		
			num_sum[i]=num1[i]-'0'+num2[i]-'0';
		for(i=len2;i<len1;i++)
			num_sum[i]=num1[i]-'0';
		for(i=0;i<len1;i++)
			if(num_sum[i]>9)
			{
				num_sum[i]=num_sum[i]-10;
				num_sum[i+1]=num_sum[i+1]+1;
			}
	}
	else 
	{
		for(i=0;i<len1;i++)		
			num_sum[i]=num1[i]-'0'+num2[i]-'0';
		for(i=len1;i<len2;i++)
			num_sum[i]=num2[i]-'0';
		for(i=0;i<len2;i++)
			if(num_sum[i]>9)
			{
				num_sum[i]=num_sum[i]-10;
				num_sum[i+1]=num_sum[i+1]+1;
			}
	}
	int first_pos=0;
	for(i=250;i>=0;i--)
		if(num_sum[i]!=0)
		{
			first_pos=i;
			break;
		}
	for(i=first_pos;i>=0;i--)
		cout<<num_sum[i];
	cout<<endl;
	return 0;
}