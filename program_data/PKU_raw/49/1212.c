int main()
{
	char c;
	char str[501];
	int i,j,r,flag,t,k;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		t=i+1;
	}
	for(j=2;j<=t;j++)
	{
		for(i=0;i<=t-j+1;i++)
		{
			for(r=i,flag=1,k=j-1;r<=i+j-1;r++,k--)
			{
				if(str[r]!=str[i+k])
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
				for(r=i;r<=i+j-1;r++)
				{
					printf("%c",str[r]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}