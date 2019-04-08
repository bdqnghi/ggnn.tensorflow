void main()
{
char a[100];
char b[100];
int c[100];
int t,n,i=0,j=0,q,r;
scanf("%s",a);
n=strlen(a);
if (n==2)
{

r=(a[0]-'0')*10+a[1]-'0';
printf("%d\n%d",r/13,r%13);
}
else if(n==1)
{
r=a[0]-'0';
printf("%d\n%d",0,r);
}





else
{


t=a[0]-'0';
for(i=0;i<n-1;i++)
{
t=(a[i+1]-'0')+t*10;
if(t>=13)
	{
	b[i]=t/13+'0';
	c[i]=t%13;
	t=t%13;
	}
else
{	
b[i]='0';
c[i]=t;

}
}
int m;
m=strlen(b);
if(b[0]>'0')
printf("%c",b[0]);
for(i=1;i<m,b[i]>='0';i++)
{
printf("%c",b[i]);
q=i;
}
printf("\n%d",c[q]);
}
}