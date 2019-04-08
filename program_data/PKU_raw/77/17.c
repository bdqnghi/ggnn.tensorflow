
int b[100][2],count=0;

void deal(char a[],int num[],int n)
{
	int i,j;
	if(n!=0)
	{
	char mid;
	mid=a[0];
	for(i=0;i<n-1;i++)
	{
		if(a[i]==mid&&a[i+1]!=mid)
		{b[count][0]=num[i];b[count][1]=num[i+1];break;}
	}
	for(j=i+2;j<n;j++)
	{a[j-2]=a[j];num[j-2]=num[j];}
	count++;
	deal(a,num,n-2);
	}
}
		
void main()
{
	char m,ar[100];
	int i,n,num[100];
	
	gets(ar);
	m=ar[0];
	n=strlen(ar);
	for(i=0;i<n;i++)
	{num[i]=i;}

	deal(ar,num,n);

	for(i=0;i<n/2;i++)
	{printf("%d %d\n",b[i][0],b[i][1]);}
}



