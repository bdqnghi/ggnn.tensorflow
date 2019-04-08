int main()
{
    char a[200],b[300],c[300];
	int d=0,i,j,k,m,n,lenb,lena;
	scanf("%s %s %s",a,b,c);
	lena=strlen(a);
	lenb=strlen(b);
	for (i=0;i<lena;i++)
	{
		if (a[i]==b[0]) 
		{
			for (j=i,k=0;j<i+lenb,k<lenb;j++,k++)
			{
				if (a[j]!=b[k]) break;  
			}
			if (k==lenb) d=1;
		}
		if (d==1) break;
	}
	if (d==1)
	{
		for (m=i,n=0;m<i+lenb,n<lenb;m++,n++)
		{
			a[m]=c[n];
		}
		printf("%s",a);
	}
	if (d==0) printf("%s",a);
	return 0;
}
