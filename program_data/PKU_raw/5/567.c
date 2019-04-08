int main()
{
	int i,len1,len2,m=0,flag=1;
	char s[M]={""},t[M]={""};
	float p,q;
	scanf("%f",&p);
	scanf("%s",s);
	scanf("%s",t);
	len1=strlen(s);
	len2=strlen(t);
	if(len1!=len2)
	{
		printf("error");
		flag=0;
	}
	else
	{
		for(i=0;i<len1;i++)
		{
			if((s[i]!='A'&&s[i]!='T'&&s[i]!='C'&&s[i]!='G')||(t[i]!='A'&&t[i]!='T'&&t[i]!='C'&&t[i]!='G'))
			{
				printf("error");
				flag=0;
				break;
			}
			else
			{
				if(s[i]==t[i])
					m++;
			}
		}
	}
	if(flag==1)
	{
		q=(float)m/len1;
		if(q>p)
			printf("yes");
		else
		printf("no");
	}
	
	return 0;
}






