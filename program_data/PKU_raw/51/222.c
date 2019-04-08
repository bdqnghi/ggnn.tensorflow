int main()
{
	int n,l,i,j,k,p,q,d,a[501]={0};
	char s[501]={0};
	scanf("%d\n",&n);
	gets(s);
	l=strlen(s);
	p=0;
	d=1;
	for(i=0;i<l;i=i+1)
		for(j=i+1;j<l;j=j+1)
		{
			q=0;
			for(k=0;k<n;k=k+1)
			{
				if (s[i+k]!=s[j+k])  
				{
					q=1;
					break;
				}
			}
			if (q==0) a[i]=a[i]+1;
			if (a[i]>p) 
			{
				p=a[i];
				d=1;
			}
			else if (a[i]==p)
				d=d+1;
		}
		if (p==0) printf("NO");
		else
		{
			printf("%d\n",p+1);
			for (i=0;i<l;i=i+1)
			{
				if (a[i]==p)
				{
					for(k=0;k<n;k=k+1) printf("%c",s[i+k]);
					d=d-1;
					if(d) printf("\n");
				}
			}
		}
}