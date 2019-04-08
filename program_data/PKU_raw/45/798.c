int main()
{
	int n,m,i,j,d=0;
	char a[50],b[50];
	scanf("%s %s",a,b);
	n=strlen(b);
	m=strlen(a);
	for(i=0;i<=(n-m);i++)
		if(a[0]==b[i])
			{
				for(j=0;j<=m-1;j++)
					if(a[j]==b[i+j])
						d++;
					else break;
					if(d==m)printf("%d",i);
			}
		
	return 0;
}