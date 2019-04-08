int main()
{
char a[600],b[600];
double n,x;
scanf("%lf\n",&n);
gets(a);
gets(b);
int i,j,a1,b1,xiangtong=0,zhengfou=1,y=0;
a1=strlen(a);
b1=strlen(b);
if(a1!=b1)
{printf("error");y=1;}
else
{
	for(i=0;i<a1;i++)
	{
	if(a[i]==b[i])
		xiangtong++;
    if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')
		zhengfou=0;
    if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')
		zhengfou=0;
	}
}
if(zhengfou==0)
printf("error");
else
if(y!=1)
{
  x=xiangtong*1.0/a1;
  if(x<=n)
	  printf("no");
  else
	  printf("yes");

}
return 0;
}