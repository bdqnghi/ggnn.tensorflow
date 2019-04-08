int main()
{
	char s1[100]={0}, s2[100]={0};
	int i, j, a1[26]={0}, a2[26]={0}, b1[26]={0}, b2[26]={0};
	scanf("%s%s",s1,s2);
	for(i=0;i<26;i++)
    {
        for(j=0;j<strlen(s1);j++)
        {
            if(s1[j]==i+65)
                a1[i]=a1[i]+1;
			if(s1[j]==i+97)
				a2[i]=a2[i]+1;
		}
    }
	for(i=0;i<26;i++)
    {
        for(j=0;j<strlen(s2);j++)
        {
            if(s2[j]==i+65)
                b1[i]=b1[i]+1;
			if(s2[j]==i+97)
				b2[i]=b2[i]+1;
		}
    }
	j=0;
	for(i=0;i<26;i++)
	{
		if(a1[i]==b1[i]&&a2[i]==b2[i])
			j++;
		else
			j=0;
	}
	if(j==26)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}