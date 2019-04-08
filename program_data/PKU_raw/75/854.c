int main()
{
	int i,num1[1000],num2[1000],len,count1=0,min=0,max=2000,maxnum=0,j;
	char ch;
	for(i=0;;i++)
	{
		cin>>num1[i];
		if(num1[i]<min)
			min=num1[i];
		ch=getchar();
		if(ch=='\n')
		{
			len=i+1;		
			break;
		}
	}
	for(i=0;i<len;i++)
	{
		cin>>num2[i];
		if(num2[i]>max)
			max=num2[i];
		ch=getchar();	
	}
	for(i=min;i<=max;i++)
	{
		count1=0;
		for(j=0;j<len;j++)
		{
			if(i>=num1[j]&&i<num2[j])
				count1++;
		}
		if(count1>maxnum)
			maxnum=count1;
	}
	cout<<len<<" "<<maxnum<<endl;
	return 0;
}