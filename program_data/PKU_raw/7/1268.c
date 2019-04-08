int main()
{
	char a[300],b[300],c[300];
	int i=0,j=0,len1,len2,len3,t=0,k;
	gets(a);
	gets(b);
	gets(c);
	len1=strlen(a);
	len2=strlen(b);
	len3=strlen(c);
		while(i<len1 && t<len2)
	{
		if(a[i]!=b[j])
		{
			i++;
			j=0;
			t=0;
		}
		else
		{
			i++;
			j++;
			t++;
		}
	}
		if(t>=len2)
		{
		for(j=0;j<i-t;j++)
	        printf("%c",a[j]);
		for(j=0;j<len3;j++)
			printf("%c",c[j]);
		for(j=i-t+len2;j<len1;j++)
			printf("%c",a[j]);
		}
		if(t<len2)
		{
			for(j=0;j<len1;j++)
				printf("%c",a[j]);
		}
	return 0;
}
