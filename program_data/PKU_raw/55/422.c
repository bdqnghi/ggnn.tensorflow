void main()
{
char intonumber(char x);
char intochar(int y);
char str[N];
gets(str);

int i=0,c1=0;
while(str[i]!=' ')
{
	c1=c1*10+intonumber(str[i++]);
}
while(str[i]==' ')
	i++;

unsigned long n1=0;
while(str[i]!=' ')
{
	n1=n1*c1+intonumber(str[i++]);

}
while(str[i]==' ')
	i++;

int l1=0;
while(str[i]!='\0')
{
l1=l1*10+intonumber(str[i++]);
}

int f;
char yu[M];
for(f=0;n1>0;f++)
{
	yu[f]=intochar(n1%l1);
	n1=n1/l1;
}
if (f==0) printf("%d",0);
for(f--;f>=0;f--)
printf("%c",yu[f]);

}



char intonumber(char x)
{
	if(x>='a'&&x<='z')
		x=x-87;
	else if(x>='A'&&x<='Z')
		x=x-55;
	else if(x>=48&&x<=57)
		x=x-48;
	return(x);
}

char intochar(int y)
{
	if(y>=0&&y<=9)
		y=y+48;
	else if(y>9&&y<=35)
		y=y+55;
	return(y);

}
