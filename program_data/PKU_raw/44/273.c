//***************************
//* ??: ?????        *
//* ??: ???            *
//* ??: 2010-11-26        *
//***************************
int back(int);//???????0
int mult(int);//????10?n???
int main()
{
	int i,n,result;
	for(i=0;i<6;i++)
	{
		cin>>n;
		result=back(n);
		cout<<result<<endl;
	}
	return 0;
}
int back(int n)
{
	int a[100],i=0,num=0,result=0;
	while(n!=0)
	{
		a[num++]=n%10;//??????
		n=n/10;
	}
	if(a[num-1]<0)//????
	{
		for(i=0;i<num;i++)
		{
			a[i]=abs(a[i]);//????
			result=result-a[i]*mult(num-i-1);//????????,????????????
		}
	}
	else if(a[num-1]>0)
	{
		for(i=0;i<num;i++)
		{
			result=result+a[i]*mult(num-i-1);
		}
	}
	return result;
}
int mult(int n)
{
	int i,sum=1;
	for(i=0;i<n;i++)
		sum=sum*10;//??
	return sum;
}