int main(){
	int n,i,j;
	cin>>n;
	struct student{
		int number;
		int maths;
		int chinese;
		int sum;
	};
	struct student stu[n],t;
	for(i=0;i<n;i++)                             //???????
		{cin>>stu[i].number>>stu[i].chinese>>stu[i].maths;
		stu[i].sum=stu[i].chinese+stu[i].maths;
		}
	for(i=0;i<3;i++)                           //?????
		for(j=n-2;j>=i;j--)
			if(stu[j].sum<stu[j+1].sum)
				{t=stu[j];
	            stu[j]=stu[j+1];
	            stu[j+1]=t;
				}
	if(n>=3)
	for(i=0;i<3;i++)                              //???3?
		cout<<stu[i].number<<' '<<stu[i].sum<<endl;
	else
	for(i=0;i<n;i++)
		cout<<stu[i].number<<' '<<stu[i].sum<<endl;
	return 0;
}