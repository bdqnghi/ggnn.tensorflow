int main()
{
	char str[256]={0},subs[256]={0},rep[256]={0},front[256]={0},back[256]={0};
	int i=0,x=0,len1,len2,n=0,m=0,y=0,flag=0;
	char a[256]={0},b[256]={0};
	gets(str);
	gets(subs);
	gets(rep);	
	len1=strlen(str);
	len2=strlen(subs);
	for(i=0;i<len1;i++)                        
	{
		strcpy(a,b);
		x=0;
		if(str[i]==subs[0])
		{
			m=i;
			for(int j=m;j<len2+m;j++)
			{
				a[x]=str[j];
				x++;
			}
			a[x]='\0';
		}
		if(strcmp(a,subs)==0)
		{
			n=i;
			flag=1;
			break;
		}
	}
	if(flag==1){
	if(n!=0)
	{
		for(i=0;i<n;i++)
		{
			front[i]=str[i];
		}
	}
	if(n!=len1-len2)
	{
		for(i=n+len2;i<len1;i++)
		{
			back[y]=str[i];
			y++;
		}
	}
	printf("%s%s%s\n",front,rep,back);
	}
	else if(flag==0)
	{
		printf("%s",str);
	}
	return 0;
}
