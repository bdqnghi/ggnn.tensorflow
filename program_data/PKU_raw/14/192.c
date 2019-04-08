/*
 * ???: 1000010191_38_1.cpp
 * ??: ???
 * ????: 2010-12-31
 * ??: ????????
 */


struct student //??
{
	int id; //??
	int x,y; //???????
	int s; //??
} d[100001],t;

int main()
{
	//????
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>d[i].id>>d[i].x>>d[i].y;
		//???
		d[i].s=d[i].x+d[i].y;
	}
	//??
	for (int i=1;i<=3;i++)
		for (int j=1;j<=n-i;j++)
			if (d[j].s>=d[j+1].s)
			{
				t=d[j];
				d[j]=d[j+1];
				d[j+1]=t;
			}
	//????
	for (int i=n;i>=n-2;i--)
		cout<<d[i].id<<' '<<d[i].s<<endl;
	return 0;
}
