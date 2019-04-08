int convert(char s[],int result[])
{
	int value,len,num=0,k=0;
	len=strlen(s);
	s[len]='\0';
	while(k<len)
	{
		value=0;
		while((s[k]!=',')&&(s[k]!='\0'))
			value=value*10+s[k++]-'0';
		result[num++]=value;
		k=k+1;
	}
	return(num);
}
void f(int x[],int y[],int num[],int total)
{
	int i,j;
	for(i=0;i<total;i++)
	{
		for(j=x[i];j<y[i];j++)
		{
			num[j]=num[j]+1;
		}
	}
}
void main()
{
	int num[1000]={0};
	int x[1000],y[1000];
	char s1[10000],s2[10000];
	gets(s1);
	gets(s2);
	int total;
	total=convert(s1,x);
	total=convert(s2,y);
	f(x,y,num,total);
	int max=num[0],i;
	for(i=0;i<1000;i++)
	{
		if(num[i]>max)
			max=num[i];
	}
	printf("%d %d",total,max);
}