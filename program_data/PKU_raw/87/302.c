int main()
{
int m,a,b,c,d,e,f;
while(1)
{	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
	{
		break;
	}

	d=d+12;
	m=(d-a)*60;
	m=(m+e-b)*60;
	m=m+f-c;
	printf("%d\n",m);
}
return 0;
}