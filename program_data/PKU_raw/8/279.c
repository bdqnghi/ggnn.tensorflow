void read(int a[],int b[]);
void sort(int a[],int b[]);
void link(int a[],int b[]);
void output(int a[]);
int input1[100],input2[100],n1,n2;
int main()
{
	read(input1,input2);
	sort(input1,input2);
	link(input1,input2);
	output(input1);
	return 0;
}
void read(int a[],int b[])
{
	int i;
	cin >>n1 >>n2;
	for (i=0;i<n1;i++)
		cin >>a[i];
    for (i=0;i<n2;i++)
		cin >>b[i];
}
void sort(int a[],int b[])
{
    int i,j,temp;
	for (i=0;i<n1-1;i++)
       for (j=i+1;j<n1;j++)
		if (a[j]<a[i])
		{
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	for (i=0;i<n2-1;i++)
       for (j=i+1;j<n2;j++)
		if (b[j]<b[i])
		{
			temp=b[j];
			b[j]=b[i];
			b[i]=temp;
		}
}
void link(int a[],int b[])
{
	int i;
	for (i=0;i<n2;i++)
		a[n1+i]=b[i];
}
void output(int a[])
{
	int i;
	for (i=0;i<n1+n2-1;i++)
		cout <<a[i] <<" ";
	cout <<a[n1+n2-1];
}