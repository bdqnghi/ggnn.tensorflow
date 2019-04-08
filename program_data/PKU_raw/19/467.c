
void main()
{
	char s[1000],a[100],b[100],out[1000];
	void insertb(char *s,char *a,char *b,char *out);
	gets(s);
	gets(a);
	gets(b);
	insertb(s,a,b,out);
}
void insertb(char *s,char *a,char *b,char *out)
{
	char *p1,*p2,*p3,*p4;
	for (p1=s,p2=a;p1<s+strlen(s);)
	{
		if((*p1==*p2&&p1==s)||(*p1==*p2&&*(p1-1)==32))
		{
			for(p2=a;p2<a+strlen(a);p2++)
			{
				if(*p1==*p2) p1++;
				else break;
			}
			if(p2==a+strlen(a))
			{
				p4=out;
				for(p3=s;p3<p1-strlen(a);p4++,p3++)
					*p4=*p3;
				for(p3=b;p3<b+strlen(b);p4++,p3++)
					*p4=*p3;
				for(p3=p1;p3<s+strlen(s);p3++,p4++)
					*p4=*p3;
                *p4='\0';
				break;
			}
			else p2=a;
		}
		else p1++;
	}
	if(p2==a+strlen(a)) insertb(out,a,b,s);
	else puts(s);
}
