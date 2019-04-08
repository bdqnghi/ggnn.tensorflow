
struct student//?????
{
	int NO;
	int chinese;
	int math;
};

int main()
{
	struct student a[100001];
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i].NO>>a[i].chinese>>a[i].math;//??
	for(i=1;i<=3;i++)
		for(j=n-1;j>=i;j--)
			if(a[j].chinese+a[j].math<a[j+1].chinese+a[j+1].math)//??????????
			{
				a[0]=a[j];
				a[j]=a[j+1];
				a[j+1]=a[0];
			}
	for(i=1;i<=3;i++)
		cout<<a[i].NO<<' '<<a[i].chinese+a[i].math<<endl;//??
}
