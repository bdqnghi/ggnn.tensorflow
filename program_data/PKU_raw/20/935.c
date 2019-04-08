void main()
{
	char a[30],b[10],max;
	scanf("%s%s",a,b);
	int la,lb,index,i;
	do
	{
		la=strlen(a);
	    lb=strlen(b);
		max=a[0];index=0;
		for(i=0;i<la;i++)
		{
			if(a[i]>max)
				max=a[i];
		}
		for(i=0;i<la;i++)
		{
			if(a[i]==max)
			{
				index=i;
				break;
			}
		}
		for(i=0;i<=index;i++) printf("%c",a[i]);
		for(i=index+1;i<=index+lb;i++) printf("%c",b[i-index-1]);
		for(i=index+lb+1;i<la+lb;i++) printf("%c",a[i-lb]);
		printf("\n");
		scanf("%s",a);
	}
	while(scanf("%s",b)!=EOF);
}
