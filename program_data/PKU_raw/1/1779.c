int num=0;
void yinshu(int x,int y)
{
	if (x==y) num++;
	else if ((x%y==0)&&(x>y)) {yinshu(x/y,y);yinshu(x,y+1);}
	else if (x>y) yinshu(x,y+1);
}
int main()
{
	int n,x;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
	yinshu(x,2);
	cout<<num<<endl;
	num=0;
	}
}
