

int main()
{
	char s[103],a[103],b[103],t[103][103];
	int i,len,start=0,end=1,cur=0,k=0,w,e;
	
	int result;
	char *p=NULL;
	gets(s);
	gets(a);
	gets(b);
	len=strlen(s);
	w=strlen(a);
	e=strlen(b);
	
	
	while(end<len)
	{
		if(s[end]==' '||s[end]==0)
		{
			for(i=start,k=0;i<end;i++,k++)
				t[cur][k]=s[i];
				t[cur][k+1]='\0';
				cur++;
				start=end+1;
				end=start+1;
		}
		else end++;
	}
	
	
				for(i=start,k=0;i<end;i++,k++)
				t[cur][k]=s[i];
				t[cur][k+1]='\0';
				cur++;
	
	for(i=0;i<cur;i++)
{
	if(i==cur-1)
	{
		if(strcmp(t[i],a)==0)
			printf("%s",b);
		else printf("%s",t[i]);
	}
	else
	{
		if(strcmp(t[i],a)==0)
			printf("%s ",b);
		else printf("%s ",t[i]);
	}
	

}

}
	
	
