int compare(char a1[],char a2[],int a,int b)
{
	int m,n=0;
	for(m=0;m<b;m++)
		if(a1[m]!=a2[m+a])
			n++;
		if(n==0)
			return(1);
		else
			return(0);
}
void main()
{
	char s[101],s1[50],s2[50];
	gets(s);
	int a,b,c,d,e;
	a=0;e=strlen(s); 
	do{
		s1[a]=s[a]; 
		a++;
	}
	while(s[a]!=' '); 
	d=a+1;
	b=0;
	do{
		s2[b]=s[d]; 
		d++;
		b++;
	}
	while(d!=e); 
	for(c=0;c<b;c++)
	{
		if(compare(s1,s2,c,a))
		{printf("%d",c);
		break;
		}
	}
}