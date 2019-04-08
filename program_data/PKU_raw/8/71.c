int m,n;
void main()
{
	void input(int num1[],int num2[]);
	void change(int num1[],int num2[]);
	void pai(int num1[],int num2[]);
	void output(int num1[]);
	int num1[100],num2[100];
	input(num1,num2);
	change(num1,num2);
	pai(num1,num2);
	output(num1);
}
void input(int num1[],int num2[])
{ 
	int i;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		scanf("%d",&num1[i]);
	for(i=0;i<n;i++)
		scanf("%d",&num2[i]);
}
void change(int num1[],int num2[])
{
	int i,j,t;
	for(i=0;i<m-1;i++)
		for(j=0;j<m-i-1;j++)
		{
			if(num1[j]>num1[j+1])
			{
				t=num1[j];
				num1[j]=num1[j+1];
				num1[j+1]=t;
			}
		}
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(num2[j]>num2[j+1])
			{
				t=num2[j];
				num2[j]=num2[j+1];
				num2[j+1]=t;
			}
		}
}
void pai(int num1[],int num2[])
{
	int i;
	for(i=0;i<n;i++)
		num1[m+i]=num2[i];
}
void output(int num1[])
{
	int i;
	for(i=0;i<m+n-1;i++)
		printf("%d ",num1[i]);
	printf("%d",num1[m+n-1]);
}