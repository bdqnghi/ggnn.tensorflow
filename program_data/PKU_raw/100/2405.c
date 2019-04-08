
int main()
{
	char a[301];
	gets(a);
	int len=strlen(a),i,j,num0=0,num;
	for(i=65;i<=90;i++)
	{
		num=0;
		for(j=0;j<len;j++)
		{
			if(a[j]==i)num++;
		}
		if(num!=0)
		{
			num0=1;
		    printf("%c=%d\n",i,num);
		}
	}
	for(i=97;i<=122;i++)
	{
		num=0;
		for(j=0;j<len;j++)
		{
			if(a[j]==i)num++;
		}
		if(num!=0)
		{
			num0=1;
			printf("%c=%d\n",i,num);
		}
	}
	if(num0==0)printf("No\n");
	return 0;
}
