int main()
{
	struct data
	{
		int age;
		char id[10];
	}o[101],y[101],tmp;
	int no=0,ny=0;
	int i,j,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>tmp.id>>tmp.age;
		if(tmp.age>=60)
		{
			o[no]=tmp;
			no++;
		}
		else
		{
			y[ny]=tmp;
			ny++;
		}
	}
	for(i=no-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(o[j].age<o[j+1].age)
			{
				o[100]=o[j];
				o[j]=o[j+1];
				o[j+1]=o[100];
			}
		}
	}
	for(i=0;i<no;i++)
		cout<<o[i].id<<endl;
	for(i=0;i<ny;i++)
		cout<<y[i].id<<endl;
	return 0;
}