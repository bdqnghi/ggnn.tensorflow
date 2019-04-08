int a[100],b[100];
int num1,num2;
void getin()
{
	int i,j;
	cin>>num1>>num2;
	for(i=1;i<=num1;i++)
		cin>>a[i];
	for(j=1;j<=num2;j++)
		cin>>b[j];
}
void order(int aa[],int num)
{
	int t,i,j;
	for(i=1;i<num;i++)
		for(j=1;j<num;j++)
			if(aa[j]>aa[j+1])
			{
				t=aa[j];
				aa[j]=aa[j+1];
				aa[j+1]=t;
			}
}
void print(int a[],int b[],int num1,int num2)
{ 
	cout<<a[1];
	int i;
	for(i=2;i<=num1;i++)
		cout<<" "<<a[i];
	for(i=1;i<=num2;i++)
		cout<<" "<<b[i];
	cout<<endl;
}

int main()
{
	
	
	getin();
	order(a,num1);
	order(b,num2);
	print(a,b,num1,num2);
	return 0;
}