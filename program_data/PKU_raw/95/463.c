void main()
{
	char s1[255],s2[255];
	int i,t;
	gets(s1);
	gets(s2);
	for(i=0;s1[i]&&s2[i];i++)
	{
		if(s1[i]>='a'&&s1[i]<='z')
		{
			s1[i]=s1[i]-'a'+'A';
		}
		if(s2[i]>='a'&&s2[i]<='z')
		{
			s2[i]=s2[i]-'a'+'A';
		}
		if(s1[i]!=s2[i])
		{
			printf((s1[i]>s2[i])?">":"<");
			break;
		}
	}
	t=strcmp(s1,s2);
	if(t==0)
		printf("=");
}

