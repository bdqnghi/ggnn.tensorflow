int main()
{
	int l,m,n,j,k,i,p,c[500],v=0;
	char a[502];
	scanf("%d",&n);
	scanf("%s",a);
	l=strlen(a);
    for(i=0;i<l-n+1;i++)
    {
		c[i]=1;
		for(j=i+1;j<l-n+1;j++)
		{ 
			p=1;
			for(k=0;k<n;k++)
			if (a[i+k]!=a[j+k]) p=0;
			if(p) c[i]++;
		}
		
	}
	p=0;
	for(i=0;i<l-n+1;i++)
	if(c[0]!=c[i]) p=1;
	if(p)
	{
	for(i=0;i<l-n+1;i++)
	 {
			p=1;
			for(j=0;j<l-n+1;j++)
			if (c[i]<c[j]) p=0;
			if(p) 
			{
				v++;
				if(v==1) printf("%d",c[i]);
			    printf("\n");
			    for(m=0;m<n;m++)
			    printf("%c",a[i+m]);
			}
	 }
    }
    else printf("NO");
} 