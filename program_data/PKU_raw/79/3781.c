void p_king(int m,int n)
{
	int i,j,k,a[300];
	int *p;
	for(p=a+1,i=1;p<=a+n;*p++=i++);
	for(i=0,j=0,k=0,p=a;k<n-1;)
	{
		i=i%n+1;
		if(*(p+i)!=0)
		{
			j++;
			if(j%m==0) {k++;*(p+i)=0;}
		}
	}
	for(i=1;;i++)
		if(a[i]!=0) {printf("%d\n",a[i]);break;}
}
void main()
{
	int i,m[20],n[20];
	for(i=0;;i++)
	{
	scanf("%d%d",&n[i],&m[i]);
	if(m[i]==0 && n[i]==0) break;
	}
	for(i=0;;i++)
	{
		if(m[i]==0 && n[i]==0) break;
		p_king(m[i],n[i]);
	}
}
