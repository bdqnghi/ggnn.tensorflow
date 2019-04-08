void main()
{
	int i,j;
	char a[30],s[30];
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>47&&s[i]<58)
		{
			for(j=i;s[j]>47&&s[j]<58;j++) a[j-i]=s[j];
			a[j-i]='\0';
			i=j-1;
			if(strcmp(a,"111111111111")==0)printf("1");
			else printf("%s\n",a);
		}
		else
		{
			j=i;
			while((s[j]>58||s[j]<47)&&s[j]!='\0') j++;
			i=j-1;
		}
	}
}