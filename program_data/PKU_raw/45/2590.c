int main()
{
	char s1[N],s2[N];
	int i,k1,k2;
	scanf("%s %s",s1,s2);
	k1=strlen(s1);k2=strlen(s2);
	for(i=0;i<=k2-k1;i++)
	{
		if(k1==1)
		{
		    if(s2[i]==s1[0])
			{
			    printf("%d\n",i);
			    return 0;
			}
		}
		else if(k1>=2)
		{
			if(s2[i]==s1[0]&&s2[i+1]==s1[1])
			{
				printf("%d\n",i);return 0;
			}
		}			
	}
	return 0;
}
