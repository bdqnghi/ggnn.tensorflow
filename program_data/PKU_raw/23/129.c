void main()
{
	int a,b,c,d=0,e=0,g,f,m,n=0,t[50];
	char s[101],p[50][101],q;
	gets(s);
	a=0;
	c=strlen(s);
	for(b=0;b<c;b++)
	{if(s[b]==' ')
	{t[a]=d;a++;d=0;}
	else{p[a][d]=s[b];d++;}
	}t[a]=d;
	for(f=a;f>0;f--)
	{for(g=0;g<t[f];g++)
		printf("%c",p[f][g]);
	printf(" ");
	}for(g=0;g<t[f];g++)
		printf("%c",p[0][g]);
}
	