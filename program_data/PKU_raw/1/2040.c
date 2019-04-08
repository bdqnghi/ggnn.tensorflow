int s=0,p=1;
void fenjie(int a,int b)
{
	int i;
	if(a==1)
		s++;
	for(i=b;i<=a;i++)
		if(a%i==0) fenjie(a/i,i);
	return;
}
int main()
{
	int n,i,j,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(j=2;j*j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				s=0;
				fenjie(a[i]/j,j);
				p=p+s;
			}
		}
        printf("%d\n",p);
		p=1;
	}
	return 0;
}
