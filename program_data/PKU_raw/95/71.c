
int main(int argc, char* argv[])
{
    char s1[80];
	char s2[80];
	gets(s1);
	gets(s2);
	int a,b;
	a=strlen(s1);
	b=strlen(s2);
	
	int i;
    for(i=0;i<a;i++)
	{if(s1[i]>=65&&s1[i]<=90)
	s1[i]=s1[i]+32;
	}
	
	for(i=0;i<b;i++)
	{if(s2[i]>=65&&s2[i]<=90)
	{s2[i]=s2[i]+32;}
	}
	int d;
	d=strcmp(s1,s2);
	if(d==0)printf("=\n");
    if(d<0)printf("<\n");
    if(d>0)printf(">\n");
	return 0;
}

