int main()
{
	int i,a[16],m=0,n=0,b,c[200],x=0,y=0;
	for(i=0;i<200;i++)
	{
scanf("%d",&c[i]);
x=x+1;
if(c[i]<0)
i=300;
	}
	for(i=0;i<16;i++,y++)
	{
a[i]=c[y];

if(a[i]>0)
{
for(b=0;b<i;b++)
{
if(a[i]==2*a[b]||a[b]==2*a[i])
m=m+1;
}
}


else if(a[i]==0)
{
	i=-1;
printf("%d\n",m);
m=0;
}


else
i=100;
}
	return 0;
}