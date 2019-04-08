int main()
{
	char a[5000];
	int i,num[300]={0},b=0;
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]!=' ')
		{
			num[b]++;
		}
		else
		{
			b++;
		}


	}
	for(i=0;i<=b;i++)
	{
		if(num[i]!=0)
		{
			printf("%d",num[i]);
			if(i!=b)
			printf(",");
		}
	}

return 0;
}
