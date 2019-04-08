f1(int x)
{
int a,b,p[100];
for(a=0;x!=0;a++)
{p[a]=x%10;
x=x/10;}
a--;
for(b=0;b<=a;b++)
{if(p[b]!=p[a])break;
else a--;}
if(b<a) return 0;
else return 1;
}
f2(int x)
{
	int a,b;
	for(a=2;a<=x;a++)
	{	b=x%a;
	if(b==0)break;}
	if(a==x) return 1;
	else return 0;
}
void main()
{int a,b,c;
scanf("%d%d",&a,&b);
c=0;
for(;a<=b;a++)
if(f1(a)==1&&f2(a)==1&&c==1)
printf(",%d",a);
else if(f1(a)==1&&f2(a)==1)
{printf("%d",a);
c=1;}
if(c==0)printf("no");
}


