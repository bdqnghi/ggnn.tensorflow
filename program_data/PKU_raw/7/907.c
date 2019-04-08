int main()
{
	char s[260],s1[260],s2[260],s3[260];
	int i,j,k,l,h,len,len1,len2;
	gets(s);
	gets(s1);
	gets(s2);
	len=strlen(s);
	len1=strlen(s1);
	len2=strlen(s2);
	for(i=0,h=0;i<len;i++,h++)
	{
		
		s3[h]=s[i];
		if(s[i]==s1[0])
		{
			int e=1;
			for(j=0,k=i;j<len1;j++,k++)
			{
				if(s[k]!=s1[j])
				{
					e=0;
					break;
				}
			}
		if(e)
		{
			for(l=0;l<len2;l++,h++)
			{
				s3[h]=s2[l];
			}
			h--;
			i=i+len1-1;
			s1[0]='.';
			
		}
		}
	}
	s3[len-len1+len2]='\0';
	printf("%s",s3);
	return 0;
}

