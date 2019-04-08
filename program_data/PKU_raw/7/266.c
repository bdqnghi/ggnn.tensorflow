int main()
{	
	int func(char c);
	int i,j,a,m,num;
	char s1[300],s2[300],s3[300];
	scanf("%s %s %s",s1,s2,s3);
	m=strlen(s1);
	a=strlen(s2);
	for(i=0;i<m;i++)
	{
		for(j=0;j<a;j++)
		{
			if(s2[j]!=s1[i+j])
			break;
		}
		if(j==a)
		{
			for(j=0;j<a;j++)
		        s1[i+j]=0;
		           break;
		}
	
	}	if(j!=a)
		{
			printf("%s\n",s1);
		    return 0;
		}
	for(i=0;i<m;i++)
	{
		if(s1[i]!=0)
			printf("%c",s1[i]);
		if(s1[i]==0)
		{
			num=i;
			printf("%s",s3);
			break;
		}
	}
	for(j=num+a;func(s1[j]);j++)
		printf("%c",s1[j]);
	printf("\n");
		return 0;
}
int func(char c)
{
	if(c=='\0')
		return 0;
	else return 1;
}