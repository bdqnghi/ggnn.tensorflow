
struct Patient{
	char id[10];
	int age,arranged;
	
};

int main()
{
	int n,i,t=0,j;
	struct Patient pai[100],orderd[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>pai[i].id>>pai[i].age;
		pai[i].arranged=0;
	}
	for(i=0;i<n;i++)
	{
		if(pai[i].age>=60)
		{
			orderd[t]=pai[i];
			pai[i].arranged =1;
			t++;
		}
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<t-1-i;j++)
		{
			if(orderd[j].age<orderd[j+1].age)
			{
				struct Patient temp=orderd[j];
				orderd[j]=orderd[j+1];
				orderd[j+1]=temp;
			}
		}
	}
 	for(i=0;i<n;i++)
	{
		if(pai[i].arranged==0)
		{
			orderd[t]=pai[i];
			t++;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<orderd[i].id<<endl ;
	}







	return 0;
}