struct student{
	char sex[10];
	float h;
};
int main()
{
	int n;
	struct student stu1[40],stu2[40],t,stu[40];
	char str1[]="male",str2[]="female";
	int k1=0,k2=0;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++)
	{
		cin>>stu[i].sex>>stu[i].h;
		if(strcmp(stu[i].sex,str1)==0)
		{
			stu1[k1++]=stu[i];
		}
		if(strcmp(stu[i].sex,str2)==0)
		{
			stu2[k2++]=stu[i];
		}
	}
	for(int i=0;i<k1;i++)
	{
		for(int j=i+1;j<k1;j++)
		{
			if(stu1[i].h>stu1[j].h)
			{
				t=stu1[i];
				stu1[i]=stu1[j];
				stu1[j]=t;
			}
		}
	}
	for(int i=0;i<k2;i++)
	{
		for(int j=i+1;j<k2;j++)
		{
			if(stu2[i].h<stu2[j].h)
			{
				t=stu2[i];
				stu2[i]=stu2[j];
				stu2[j]=t;
			}
		}
	}
	for(int i=0;i<k1;i++)
	{
		cout<<fixed<<setprecision(2)<<stu1[i].h<<" ";
	}
	for(int i=0;i<k2-1;i++)
	{
		cout<<fixed<<setprecision(2)<<stu2[i].h<<" ";
	}
	cout<<stu2[k2-1].h<<endl;
	return 0;
}
