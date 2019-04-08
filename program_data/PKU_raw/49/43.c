int  main()
{
	char a[500];
	int len,i,j,k,p,flag,m;
	gets(a);
	len=strlen(a);
	for(i=2;i<=len;i=i+2)
	{
		for(j=0;j<len;j++)
		{
			flag=0;
			for(k=0;k<i/2;k++)
			{
				if(a[j+k]==a[j+i-1-k])
					flag=1;
				else {
					flag=0;break;
				}
			}
			if(flag)
			{
				for(m=j;m<j+i;m++)
					printf("%c",a[m]);
				printf("\n");
			}
		}
	}
return 0;
}