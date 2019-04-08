void main()
{
	char s[300],a[103],b[103];
	int i,j,k,p,l,m,n,num,h=0;
	gets(s);l=strlen(s);
	gets(a);m=strlen(a);
	gets(b);n=strlen(b);
	
	for(i=0;i<l;i++)
	{
		num=0;
		if(s[i]==a[0])
		{
			num=1;
			for(j=1;a[j]!='\0';j++)
				if(s[i+j]==a[j])
					num++;
			if(num==m && (s[i+j]==' ' || s[i+j]=='\0') && n>=m)
			{
				if(i==0 ||( i!=0 && s[i-1]==' '))
				{
				for(k=0;k<(l-m-i);k++)
					s[l-1+n-m-k]=s[l-1-k];
				for(p=0;p<n;p++)
					s[p+i]=b[p];
				s[l+n-m]='\0';
				i=i+n-1;}
			}
			else if(num==m && (s[i+j]==' ' || s[i+j]=='\0') && n<m)
			{
				if(i==0 ||( i!=0 && s[i-1]==' '))
				{
				for(k=0;k<(l-m-i);k++)
					s[n+i+k]=s[m+i+k];
				for(p=0;p<n;p++)
					s[p+i]=b[p];
				s[l+n-m]='\0';
				i=i+n-1;}
			}l=l+i;

		}

	}
	printf("%s",s);
}