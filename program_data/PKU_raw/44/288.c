int  reverse(int num)//????????????????
{   int a[10],k=0,i,j,result=0;
	while(num!=0)
	{
		a[k]=num%10;//????????
		num=num/10;
		k++;
	}
	for(i=0;i<k;i++)
		for(j=1;j<=k-i-1;j++)
			a[i]=10*a[i];//10??
	for(i=0;i<k;i++)
		result=result+a[i];//??10??????
	return result;
}
int main()
{
	int i,a[6];
	for(i=0;i<6;i++)
		cin>>a[i];
	for(i=0;i<5;i++)
	cout<<reverse(a[i])<<endl;//????
	cout<<reverse(a[5]);//?????5??
	return 0;
}