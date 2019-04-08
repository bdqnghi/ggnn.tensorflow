int main()
{
	char str1[100000],str2[100000];
	int i,j=0,num=0,count=0,max=0,x[1000],y[1000],len;
	memset(str1,0,sizeof(str1));
	memset(str2,0,sizeof(str2));
	memset(x,0,sizeof(x));
	memset(y,0,sizeof(y));
	cin>>str1>>str2;
	for(i=0;i<strlen(str1);i++)//?str1???????x?
	{
		if(str1[i]!=',')
		{
			num=num*10+str1[i]-'0';
			if(i==strlen(str1)-1)x[j]=num;
			continue;
		}
		if(str1[i]==',')
			x[j++]=num;
		num=0;
	}
	num=0;j=0;
	for(i=0;i<strlen(str2);i++)//?str2???????y?
	{
		if(str2[i]!=',')
		{
			num=num*10+str2[i]-'0';
			if(i==strlen(str2)-1)y[j]=num;
			continue;
		}
		if(str2[i]==',')
			y[j++]=num;
		num=0;
	}
	len=j+1;//??????
	for(i=0;i<1000;i++)
	{
		for(j=0;j<len;j++)
		{
			if(x[j]==i)
				count++;
			if(y[j]==i)
				count--;
		}
		if(count>max)
			max=count;
	}
	cout<<len<<' '<<max<<endl;
	return 0;
}