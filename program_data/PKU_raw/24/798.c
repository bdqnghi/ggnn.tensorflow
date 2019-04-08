int p,q;
int main()
{   
	int choose(int*,int);
	char ss[50][100];
	int i,n,a[50];
	for(i=0;scanf("%s",ss[i])!=EOF;i++)
	{;}
	n=i;
	for(i=0;i<n;i++)
	{a[i]=strlen(ss[i]);}
	choose(a,n);	
	printf("%s\n%s",ss[p],ss[q]);
}

int choose(int *a,int n)
{   
	int i,max,min;
    max=0;
	min=a[0];
	p=0;
	q=0;
    for(i=0;i<n;i++)
	{if(a[i]>max)
	{max=a[i];p=i;}
	if(a[i]<min)
	{min=a[i];q=i;}
	}
	return 0;
}