void reverse(int num)
{
	int i,k;
	int j=0;
	int a[1000];
	if(num==0)
		printf("0");
	else if(num>0)
	{
		do
		{
			a[j]=num%10;
			num=num/10;
			j++;
		}
		while(num>0);
		for(i=0;i<j;i++)
		{
			if(a[i]!=0)
				break;
		}
		for(k=i;k<j;k++)
			printf("%d",a[k]);
	}
	else if(num<0)
	{
		num=-num;
		do
		{
			a[j]=num%10;
			num=num/10;
			j++;
		}
		while(num>0);
		for(i=0;i<j;i++)
		{
			if(a[i]!=0)
				break;
		}
		printf("-");
		for(k=i;k<j;k++)
			printf("%d",a[k]);
	}
}


int main()
{
	int x,y;
	for(x=0;x<6;x++)
	{
		scanf("%d",&y);
		reverse(y);
		printf("\n");
	}


	

	return 0;
}