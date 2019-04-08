int main()
{
	char s[256],a[101],b[101];
	int i,len,k,j,len1,len2,l,n,p=0;
	gets(s);
	gets(a);
	gets(b);

	len=strlen(s);
	len1=strlen(a);
	len2=strlen(b);
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==a[0]&&p==0)
		{
			k=0;
			while(s[i+k]==a[k]&&k<len1)
			{
				k++;

			}
			if(k==len1)
			{   
				p=1;
                                     
				len=strlen(s);
				len1=strlen(a);
				len2=strlen(b);
				if(len1==len2)
				{
					for(j=0;j<k;j++)
					{
						s[i+j]=b[j];
					}
				}
				if(len1>len2)
				{
					for(j=0;j<len1;j++)
					{
							s[i+j]=b[j];
					}
					for(j=len2,l=k;(l+i)<=len;j++,l++)
					{
						s[i+j]=s[i+l];
					}
				}
				if(len1<len2)
				{
					len=strlen(s);
					n=len2-len1;
					for(l=len;l>=(i+k);l--)  s[l+n]=s[l];
					for(j=0;j<len2;j++)   s[i+j]=b[j];


				}
			}
		}
	}
	puts(s);
	return 0;


}
