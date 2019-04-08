int main()
{
	char s1[15],s2[4],max;
	int i,j,len,k;
	while(scanf("%s%s",s1,s2)!=EOF)
	{
		len=strlen(s1);
		k=0;
        max=s1[0];
		for(j=1;j<len;j++)
		{
			if(max<s1[j])
			{
				max=s1[j];
				k=j;
			}
		}	
		for(j=len+2;j>k+3;j--)
			s1[j]=s1[j-3];
		for(j=k+1,i=0;j<k+4;j++,i++)
			s1[j]=s2[i];
		s1[len+3]='\0';
		puts(s1);
	}
	return 0;
}
