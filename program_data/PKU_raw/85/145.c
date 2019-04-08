int main()
{
	char a[19];
	int n,i,j,d,len;
	scanf("%d",&n);
	for(i=1;i<=n+1;i++)
	{
		gets(a);
		len=strlen(a);
		d=0;
		for(j=0;j<=len-1;j++)
		{
			if(       ( (a[0] >= '9') ||( a[0] <'0' ) )&&      ( (a[j]>='a' && a[j]<='z') || (a[j]>='A' && a[j]<='Z') || (a[j]=='_') || (a[j]>='0' && a[j]<='9') ))
			{
				continue;
			}
			else
			{
				d++;
				printf("no\n");
				break;
			}
		}
		if((d==0)&&(i!=1))
		{
			printf("yes\n");
		}
	}
	return 0;
}