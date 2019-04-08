int main()
{
	char m[50],n[50];
	scanf("%s %s",m,n);
    int t,i,p,r,j,k,w=0;
	t=strlen(m);
	r=strlen(n);
	for (i=0;i<=r;i++)
	{
		k=i;
		p=1;
		for(j=0;j<t;j++,k++)
		{
			if(m[j]==n[k]&&w==0&&p==1)
			{
				p=1;
			}
			else
			{
				p=0;
			}			
		}
		if(p==1)
		{
			printf("%d",i);
			w=1;
		}
	}
	return 0;
}
