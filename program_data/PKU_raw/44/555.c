int reverse(int num)
{
	int result=0;
	int number[100]={0};int k=0; int i=0,j=0;
	if(num>=0)
	{
		for(i=0;num>=0;i++)
		{
			k=num/10;
			number[i]=num-10*k;
			num=k;
			if(num==0) break;
		}
		for(j=0;j<=i;j++)
		    result=result+number[j]*pow(10.0,i-j);
	}
	else
	{
		num=-num;
		for(i=0;num>=0;i++)
		{
			k=num/10;
			number[i]=num-10*k;
			num=k;
			if(num==0) break;
		}
		for(j=0;j<=i;j++)
		    result=result+number[j]*pow(10.0,i-j);
		result=-result;
	}
	return result;
}

int main()
{
	int num=0;
	while(cin>>num)
	{
		cout<<reverse(num)<<endl;
	}
	return 0;
}
	