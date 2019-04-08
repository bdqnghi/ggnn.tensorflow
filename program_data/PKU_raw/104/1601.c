int x1,y1;
int a1[100];
int a2[100];
int max(int a,int b)
{
	if(a>=b) return a;
	else return b;
}
void find(int n)
{
	int i,j,k;
	for(j=0;;j++)
	{
		if(power(2,j+1)>n&&power(2,j)<=n)
		{
			x1=j;
			break;
		}
	}
}
int power(int a,int b)
{
	int p,s=1;
	for(p=0;p<b;p++)
		s=s*a;
	return s;
}
int main()
{
	int n1,n2,i,j,o,t1,t2;
	scanf("%d %d",&n1,&n2);
	find(n1);
	t1=x1;
	for(i=x1;i>=0;i--)
	{
		a1[i]=n1;
		y1=n1-power(2,i);
		if(n1%2==0) o=y1/2+power(2,i-1);
		else o=(y1+1)/2+power(2,i-1);
		n1=n1-o;
	}
	find(n2);
	t2=x1;
	for(i=x1;i>=0;i--)
	{
		a2[i]=n2;
		y1=n2-power(2,i);
		if(n2%2==0) o=y1/2+power(2,i-1);
		else o=(y1+1)/2+power(2,i-1);
		n2=n2-o;
	}
	for(i=max(t1,t2);i>=0;i--)
	{
		if(a2[i]==a1[i])
		{
			printf("%d\n",a1[i]);
			break;
		}
	}
	return 0;
}