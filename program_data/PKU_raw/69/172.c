int main()
{
	char a[250],b[250];
	int l1,l2,l=0,m,n,c[250]={0},i;
	scanf("%s%s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	while(l1>0||l2>0)
	{	
		if(l1>0) 
			m=a[l1-1]-'0';
		else m=0;
		l1--;
		if(l2>0) 
			n=b[l2-1]-'0';
		else n=0;
		l2--;	
		c[l]+=(m+n);
		c[l+1]=c[l]/10;
		c[l]=c[l]%10;
		l++;
	}
	while(c[l]==0&&l>0)
		l--;
	for(i=l;i>=0;i--)
		printf("%d",c[i]);
}
	



