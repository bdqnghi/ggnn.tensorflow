
int main()
{
	int i,ls,lp,l,x=0;
	char s[100],p[100];
	gets(s);
	gets(p);
	ls=strlen(s);
	lp=strlen(p);
	if(ls>=lp) l=lp;
	else l=ls;
	for(i=0;i<l;i++)
	{
		if(s[i]>='A' && s[i]<='Z') s[i]=s[i]+32;
		if(p[i]>='A' && p[i]<='Z') p[i]=p[i]+32;
	}
	for(i=0;i<l;i++)
	{
		if(s[i]>p[i]) 
		{

			x=1;
			break;
		}
		else if(s[i]<p[i])
		{
			x=-1;
			break;
		}	
		else x=0;
	}
	if (x==0) printf("=\n");
	if (x==1) printf(">\n");			
	if (x==-1) printf("<\n");


return 0;
}
