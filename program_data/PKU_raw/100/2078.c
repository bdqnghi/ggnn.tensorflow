int main()
{
	char a[300]={'\0'},c[53]={"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	int b[52]={0},i,j,length,sum=0;
	gets(a);
	length=strlen(a);
	for(j=0;j<52;j++)
	{
		for(i=0;i<length;i++)
		{
			if(a[i]==c[j])
			{
				b[j]+=1;
				sum+=1;
			}
		}

	}
	if(sum==0)
		printf("No");
	else
	{
		for(i=0;i<52;i++)
		{
			if(b[i]!=0)
				printf("%c=%d\n",c[i],b[i]);
		}
	}
	return 0;
}
