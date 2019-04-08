int main()
{
	int s=1,n,len1,len2,i,j,num1[100],num2[100],num3[40000]={0},flag;
	char str1[100]={0};
	cin>>n;
	if(n<32){
	for( i=0;i<n;i++)
		s*=2;
	 cout<<s;
	}
	else if(n>=32&&n<=60)
	{
		num1[9]=1,num1[8]=0,num1[7]=7,num1[6]=3,num1[5]=7,num1[4]=4,num1[3]=1,num1[2]=8,num1[1]=2,num1[0]=4;
	j=0;
	n=n-30;s=1;
	for(i=0;i<n;i++)
		s*=2;
	
	while(s>0){
	num2[j++]=s%10;//cout<<num2[j-1]<<endl;
	s/=10;
	}int len2=j;
	for(i=0;i<10;i++)
	{	for(j=0;j<len2;j++)
		{
			num3[i+j]=num3[i+j]+num1[i]*num2[j];
			while(num3[i+j]>=10)
			{
				num3[i+j]-=10;
				num3[i+j+1]++;
			}
		}
	}
	for(i=30000;i>=0;i--)
	{
		if(num3[i]!=0)
		{	flag=i;break;
		}
	}
    for(i=flag;i>=0;i--)
	{
		cout<<num3[i];
	}
}
else if(n>60&&n<=90)
	{
		num1[18]=1,num1[17]=1,num1[16]=5,num1[15]=2,num1[14]=9,num1[13]=2,num1[12]=1,num1[11]=5,num1[10]=0,num1[9]=4,num1[8]=6,num1[7]=0,num1[6]=6,num1[5]=8,num1[4]=4,num1[3]=6,num1[2]=9,num1[1]=7,num1[0]=6;
	j=0;
	n=n-60;s=1;
	for(i=0;i<n;i++)
		s*=2;
	
	while(s>0){
	num2[j++]=s%10;//cout<<num2[j-1]<<endl;
	s/=10;
	}int len2=j;
	for(i=0;i<19;i++)
	{	for(j=0;j<len2;j++)
		{
			num3[i+j]=num3[i+j]+num1[i]*num2[j];
			while(num3[i+j]>=10)
			{
				num3[i+j]-=10;
				num3[i+j+1]++;
			}
		}
	}

	for(i=30000;i>=0;i--)
	{
		if(num3[i]!=0)
		{	flag=i;break;
		}
	}
    for(i=flag;i>=0;i--)
	{
		cout<<num3[i];
	}
}

else if(n>90)
	{
		num1[22]=3,num1[21]=7,num1[20]=7,num1[19]=7,num1[18]=8,num1[17]=9,num1[16]=3,num1[15]=1,num1[14]=8,num1[13]=6,num1[12]=2,num1[11]=9,num1[10]=5,num1[9]=7,num1[8]=1,num1[7]=6,num1[6]=1,num1[5]=7,num1[4]=0,num1[3]=9,num1[2]=5,num1[1]=6,num1[0]=8;
	j=0;
	n=n-75;s=1;
	for(i=0;i<n;i++)
		s*=2;
	
	while(s>0){
	num2[j++]=s%10;//cout<<num2[j-1]<<endl;
	s/=10;
	}int len2=j;
	for(i=0;i<23;i++)
	{	for(j=0;j<len2;j++)
		{
			num3[i+j]=num3[i+j]+num1[i]*num2[j];
			while(num3[i+j]>=10)
			{
				num3[i+j]-=10;
				num3[i+j+1]++;
			}
		}
	}

	for(i=30000;i>=0;i--)
	{
		if(num3[i]!=0)
		{	flag=i;break;
		}
	}
    for(i=flag;i>=0;i--)
	{
		cout<<num3[i];
	}
}


//	4294967296


return 0;
}