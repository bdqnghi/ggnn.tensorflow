
int main()
{int m[100], n[100], a[300]={0}, *p, *q, l=0, i, j, k, t;
p=&m[0],q=&n[0];
scanf("%d %d",p,q), l++;
while(*p!=0||*q!=0)
{
	p++,q++;
	scanf("%d %d",p,q);
	l++;
}
l--;

for(j=0;j<l;j++)
{
	k=0,t=0;
	for(i=0;i<300;i++)
	{a[i]=0;}
	for(i=0;t<m[j]-1;i++)
	{
		if(a[i]==0)
		{k++;}
		if(k>=n[j])
		{
			a[i]++;
			k=0;
			t++;
		}
		if(i>=m[j]-1)
		{i=-1;}
	}
	i=0;
	while(a[i]!=0&&i<m[j])
	{i++;}
	printf("%d\n",i+1);
}
return 0;
}