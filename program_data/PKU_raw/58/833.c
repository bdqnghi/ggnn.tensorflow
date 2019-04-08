int main()
{
	char str[81];
	int n=0,i=0,j=0,J=0;
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
		cin.getline(str,81);
		int sum1=0,sum2=0,sum3=0,sum4=0;
		int p=0;	
		for(j=0;str[j]!='\0';j++)
			J=j;
		for(j=0;j<=J;j++)
		{
			sum1=(str[j]==95);
			sum2=(str[j]>=65&&str[j]<=90);
			sum3=(str[j]>=97&&str[j]<=122);
			sum4=(str[j]>=48&&str[j]<=57);
			if(sum1+sum2+sum3+sum4==0)
				p++;
		}
		
			sum1=(str[0]==95);
			sum2=(str[0]>=65&&str[j]<=90);
			sum3=(str[0]>=97&&str[j]<=122);
			if(sum1+sum2+sum3==0||p!=0)
				cout<<0<<endl;
			if(sum1+sum2+sum3!=0&&p==0)
				cout<<1<<endl;

	}
	return 0;
}

