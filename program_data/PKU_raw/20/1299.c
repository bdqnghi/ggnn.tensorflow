int main()
{
	char s1[11],s2[4],t[20];
	int max,i,p;
	while(scanf("%s%s",s1,s2)!=EOF)
	{
		max=0;
		for(i=0;i<strlen(s1);i++)
		{
			if(s1[i]>max)
			{
				max=s1[i];
				p=i;
			}
		}
		strcpy(t,s1+p+1);
		s1[p+1]='\0';
		strcat(s1,s2);
		strcat(s1,t);
		puts(s1);
	}
	return 0;
}
