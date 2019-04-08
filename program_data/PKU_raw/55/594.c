int qr(int x,int y)
{
if(y<=0)
return(1);
else return x*qr(x,(y-1));
}
int main()
{
int a,b,n,i,j,d[100];
long int k=0;
char p[100],q[100];
scanf("%d %s %d",&a,p,&b);
n=strlen(p);
for(i=0;i<n;i++)
{
	if(p[i]<='z'&&p[i]>='a')
		p[i]-=32;
}
for(i=0;i<n;i++)
{
	if(p[i]>='A'&&p[i]<='Z')
	k+=(qr(a,(n-1-i))*(p[i]-'A'+10));
	else
	k+=(qr(a,(n-1-i))*(p[i]-'0'));
	}
for(i=0;;i++)
	{
	if(k>=b)
		{
		d[i]=(k-(k/b)*b);
		k=k/b;
		}
	else
		{
		d[i]=k;
		break;
		}
	}
for(j=0;j<=i;j++)
	{
	if(d[j]<=9)
	q[j]=d[j]+'0';
	else 
	q[j]=d[j]-10+'A';
	}
for(j=i;j>=0;j--)
printf("%c",q[j]);
return(0);
}
