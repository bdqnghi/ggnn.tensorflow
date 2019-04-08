//????????
int reverse(int);//?????
int main()
{
	int num=0;
	while(cin>>num)
	{		
		cout<<reverse(num)<<endl;
	}
	return 0;
}
int reverse(int num)
{
	int i,sum=0,a[10]={0},count=0;
	if(num==0)
		return 0;
	else if(num<0)//?????????
	{
		cout<<"-";
		num=-num;
	}
	for(i=0;;i++)//??????
	{
		a[i]=num%10;
		num=num/10;
		count++;
		if(num==0)
			break;
	}
	for(i=0;i<10;i++)
	{
		sum=sum+a[i]*pow(10.0,count-i-1);//??????
	}
	return sum;
}