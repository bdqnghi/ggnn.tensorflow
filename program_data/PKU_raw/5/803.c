int main()
{
	char s1[100],s2[100];
	int changdu1,changdu2,i,js=0;
	double rate,rate1;
	scanf("%lf%s%s",&rate,s1,s2);
	changdu1=strlen(s1);
	changdu2=strlen(s2);
	if(changdu1!=changdu2)
		printf("error");
	else
	{
		for(i=0;i<changdu1;i++)
		{
			if((s1[i]!='A'&&s1[i]!='T'&&s1[i]!='G'&&s1[i]!='C')||(s2[i]!='A'&&s2[i]!='T'&&s2[i]!='G'&&s2[i]!='C'))
			{
				js=1;
				break;
			}
		}
		if(js==1)
			printf("error");
		else
		{
			for(i=0;i<changdu1;i++)
			{
				if(s1[i]==s2[i])
					js++;
			}
			rate1=1.0*js/changdu1;
			if(rate1>rate)
				printf("yes");
			else printf("no");
		}
	}
	return 0;
}

