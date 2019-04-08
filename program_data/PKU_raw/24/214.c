
int max(int x,int y)
{
	if(x>y)
		return(x);
	else return(y);
}

int min(int x,int y)
{
	if(x<y)
		return(x);
	else return(y);
}

void main()
{
	char c[1000];
	int a[50],b[50];
	int i,j,n,k=0,MAX,MIN;
	gets(c);
	n=strlen(c);
	
	for(i=0;i<n;i++)
		if(c[i]==' ')
		{a[k]=i;k++;}
		
	b[0]=a[0];
    a[k]=n;

	for(i=1;i<=k;i++)
		b[i]=a[i]-a[i-1]-1;
    
	MAX=MIN=b[0];
    for(i=0;i<=k;i++)
	{MAX=max(MAX,b[i]);
	MIN=min(MIN,b[i]);
	}

	for(i=0;i<=k;i++)
		if(b[i]==MAX)
		{
		
		for(j=a[i]-b[i];j<a[i];j++)
			printf("%c",c[j]);
		printf("\n");
		break;}
	for(i=0;i<=k;i++)
		if(b[i]==MIN)
		{
		
		for(j=a[i]-b[i];j<a[i];j++)
			printf("%c",c[j]);
		printf("\n");
		break;
		}
}






			
