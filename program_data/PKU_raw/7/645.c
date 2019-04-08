int main()
{
	int ls1,ls2,ls3,i,j=0,m,lans=0,z=0;
	char s1[100],s2[100],s3[100],ans[100];
	scanf("%s",s1);
	scanf("%s",s2);
	scanf("%s",s3);
	ls1=strlen(s1);
	ls2=strlen(s2);
	ls3=strlen(s3);
	for(i=0;i<ls1;i++)
	{
		
		if(s1[i]!=s2[0])ans[lans++]=s1[i];
		else
		{
			for(j=0,m=i;j<ls2;j++,m++)
		{
			if(s1[m]!=s2[j])break;
		}
		if(j==ls2 && z!=1)
		{
			i=m-1;
			for(j=0;j<ls3;j++)
				ans[lans++]=s3[j];
			z++;
		}
			else 
			{
				for(;i<=m;i++)
				ans[lans++]=s1[i];
				i--;
			}

		}
	}
			ans[lans]='\0';
			printf("%s",ans);
    return 0;
}