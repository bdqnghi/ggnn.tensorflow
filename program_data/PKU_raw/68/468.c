
int sushu(int n)
{
int i,s,t;
i=2;
if (n==3)
t=1;
else
{
while (i<=sqrt(n))
	{
	s=n%i;
	if (s!=0)
	{
		if(i==2)
			i=i+1;
		else
			i=i+2;
	}
	else
		break;
	}
if (i>sqrt(n))
	t=1;
else
    t=0;
}
return (t);
}

void main()
{
int a,b,c,d,e,f,j;
scanf("%d",&f);
for(a=6;a<=f;a=a+2)
{


for(j=3;j<=a/2;j=j+2)
{
	b=sushu(j);
	c=sushu(a-j);
	if(b==1&&c==1)
	{
		d=j;
		e=a-j;
		break;
	}
}
printf("%d=%d+%d\n",a,d,e);

}
}