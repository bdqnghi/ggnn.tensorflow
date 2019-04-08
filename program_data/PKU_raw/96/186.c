int main()
{
	int a[101],num,i,temp=0;
	char c;
	for(i=0;i<=100;i++)
	{
		scanf("%c",&c);
		if(c=='\n')
		{
			num=i;
			break;
		}
		a[i]=c-'0';
	}
	if(num>2)
	{
		for(i=0;i<num-2;i++)
		{
			temp=a[i]*100+a[i+1]*10+a[i+2];
			printf("%d",temp/13);
			temp=temp%13;
			a[i+1]=(temp-temp%10)/10;
			a[i+2]=temp%10;
		}
		printf("\n%d\n",temp);
	}
	if(num==2)
	{
		temp=10*a[0]+a[1];
		printf("%d\n%d\n",temp/13,temp%13);
	}
	if(num==1)
	{
		printf("0\n%d\n",a[0]);
	}
	return 0;
}

