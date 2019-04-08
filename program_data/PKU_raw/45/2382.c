
int main()
{
	char zfc1[50],zfc2[50];
	scanf("%s",&zfc1);
	scanf("%s",&zfc2);

	int len1,len2;
	len1=strlen(zfc1);
	len2=strlen(zfc2);

	int i,j;
	int time=0;
	int re;
	for(i=0;i<=len2-len1;i++)
	{
		for(j=0;j<len1;j++)
		{
			if(zfc1[j]==zfc2[j+i])
			{
				time++;
			}
		}
		if(time==len1)
		{
			re=i;
			break;
		}
		time=0;
	}
	printf("%d\n",re);
	return 0;
}