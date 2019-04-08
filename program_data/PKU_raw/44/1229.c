

void main()
{
int i,ans,n=0;
//char c;	
int reverse(int num);
for(i=0;i<6;i++)
{
	scanf("%d",&n);
	ans=reverse(n);
	printf("%d\n",ans);
}
}

int reverse(int num)
{
int m=0,flag=1,w;
if(num<0) {flag=0;num=-num;}
w=(int)log10(num);
for(;w>=0;w--)
{
	m=m*10+num%10;
	num=num/10;
}
if(flag==0) m=-m;
return m;
}