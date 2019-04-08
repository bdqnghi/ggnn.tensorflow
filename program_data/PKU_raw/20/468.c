void main()
{
	char s1[13],s2[4];
	while(scanf("%s%s",s1,s2)!=EOF)
	{
		int l,i,j,k;
		l=strlen(s1);
		for(i=0;i<l;i++)
		{
			for(j=0;j<l;j++)
			{
				if(s1[i]<s1[j])
					break;
			}
			if(j==l)
			{
				for(k=l+3;k>i+3;k--)
					s1[k]=s1[k-3];
				s1[l+3]='\0';
				s1[i+1]=s2[0];
				s1[i+2]=s2[1];
				s1[i+3]=s2[2];
				break;
			}
		}
		printf("%s\n",s1);
	}
}