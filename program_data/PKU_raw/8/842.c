int m,n;
void nem(int num1[100],int num2[100])
{
	int i;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	scanf("%d",&num1[i]);
	for(i=0;i<n;i++)
	scanf("%d",&num2[i]);
}
void pai(int num[100],int x)
{
	int i,j,t;
	for(j=0;j<x-1;j++)
	for(i=0;i<x-1-j;i++)
	if(num[i]>num[i+1])
	{
		t=num[i];
		num[i]=num[i+1];
		num[i+1]=t;
	}
}
void he(int num1[100],int num2[100],int num[100])
{
	int i;
	for(i=0;i<m;i++)
	num[i]=num1[i];
	for(i=m;i<m+n;i++)
	num[i]=num2[i-m];
}
void printnum(int num[100])
{
	int i;
	printf("%d",num[0]);
	for(i=1;i<m+n;i++)
	printf(" %d",num[i]);
}
int main()
{
	int num[100],num1[100],num2[100];
	nem(num1,num2);
	pai(num1,m);
	pai(num2,n);
	he(num1,num2,num);
	printnum(num);
	return 0;
}