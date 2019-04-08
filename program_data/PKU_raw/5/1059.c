int main()
{
	int i;
	double a,len,cd,s=0,b=0,c;
	char s1[501],s2[501];
	scanf("%lf",&a);
	scanf("%s%s",&s1,&s2);
	len=strlen(s1);
	cd=strlen(s2);
	if(len!=cd)
	{
		printf("error");
	}
	if(len==cd)
	{
		for(i=0;i<len;i++)
		{
			if((s1[i]=='A'||s1[i]=='T'||s1[i]=='C'||s1[i]=='G')&&(s2[i]=='A'||s2[i]=='T'||s2[i]=='C'||s2[i]=='G'))
			{
				b++;
				if(s1[i]==s2[i])
				{
					s++;
				}
			}
		}
		if(b==len)
		{
			c=s/len;
			if(c>a)
			{
				printf("yes");
			}
			else
			{
				printf("no");
			}
		}
		if(b!=len)
		{
			printf("error");
		}
	}
	return 0;
}
			


