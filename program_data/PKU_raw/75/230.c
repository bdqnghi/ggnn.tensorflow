int main()
{int i,t,j,n=0,m,a[1001]={0},b[1001]={0};
char e;
scanf("%d",&a[0]);
m=1;
scanf("%c",&e);
while(e==',')
{	scanf("%d",&a[m]);
	m++;
	scanf("%c",&e);
}
scanf("%d",&b[0]);
m=1;
scanf("%c",&e);
while(e==',')
{	scanf("%d",&b[m]);
	m++;
	scanf("%c",&e);
}
for(i=0;i<1000;i++)
{	t=0;
	for(j=0;j<m;j++)
	{if(i>=a[j]&&i<b[j])	t++;}
	if(t>n)
		n=t;
}
printf("%d %d",m,n);
return 0;
}
