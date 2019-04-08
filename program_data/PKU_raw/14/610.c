int main () {
	int n,c,m;
	cin>>n;
	struct student
	{
		int id;
		int total;
	};                      //?????
	struct student stu[n+1];//??????
	int i,j;
	for(i=0;i<n;i++){
	   cin>>stu[i].id>>c>>m;
	   stu[i].total=c+m;//?????????
	}
	for(i=n-1;i>n-4;i--)
		for(j=n-1;j>n-i-1;j--)
		{
            if(stu[j].total>stu[j-1].total){
            	stu[n]=stu[j];
            	stu[j]=stu[j-1];
            	stu[j-1]=stu[n];
            }
		}//????
	for(i=0;i<3;i++){
		if(i<n)
	    cout<<stu[i].id<<" "<<stu[i].total<<endl;//?????
	}
	return 0;
}
