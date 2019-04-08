int a[1000]={0},b[1000]={0};
void input()
{
	int i,n,m;
	cin >>n>>m;
	for (i=1;i<=n;i++)
		cin >>a[i];
	for (i=1;i<=m;i++)
		cin >>b[i];
	a[0]=n;b[0]=m;
}//???????????????????0???
void sort(int a[])
{
	int i,j;
	for (i=1;i<a[0];i++)
		for (j=1;j<=a[0]-i;j++)
			if (a[j]>a[j+1])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
}//????
void output()
{
	int i;
	for (i=1;i<=a[0];i++)
		cout <<a[i]<<' ';
	for (i=1;i<=b[0]-1;i++)
		cout <<b[i]<<' ';
	cout <<b[b[0]];
}//?? 
int main()
{
	input();
	sort(a);
	sort(b);
	output();
	return 0;
}