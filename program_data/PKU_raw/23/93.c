void main()
{
	char str[100];
	char word[50][100]={'\0'};
	int i,j,k,a,h,u;
	h=0;
	a=0;
	u=0;
	gets(str);
	for(i=0;i<100;i++)
	{
		if (str[i]==' ')
		{a++;}
		if (str[i]=='\0')
		{k=i;break;}
	}
		for(j=0;j<k;j++)
		{
			if(str[j]==' ')
			{h++;u=0;}
			else
			{
			word[h][u]=str[j];
			u=u+1;
			}
		}
	for(i=a;i>0;i=i-1)
	{printf("%s ",word[i]);}
	printf("%s",word[0]);
}