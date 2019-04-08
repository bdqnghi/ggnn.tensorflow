int num1[1001];
int num2[1001];
int num;
int compare(const void * p1,const void * p2)
{
	int * q1,* q2;
	q1=(int *) p1;
	q2=(int *) p2;
	return *q1-*q2;
}
int main()
{
	while(true)
	{
		
		cin>>num;
		if(num==0)
			break;
		for(int i=1;i<=num;i++)
		{
			cin>>num1[i];
		}
		for(int i=1;i<=num;i++)
		{
			cin>>num2[i];
		}
		qsort(&(num1[1]),num,sizeof(int),compare);
		qsort(&(num2[1]),num,sizeof(int),compare);
		int p1,p2,p3,p4;
		p1=1;
		p2=num;
		p3=1;
		p4=num;
		int money=0;
		while(true)
		{
			if(p1==p2)
			{
				if(num1[p1]>num2[p3])
					money++;
				if(num1[p1]<num2[p3])
					money--;
				break;
			}
			else
			{
				if(num1[p1]>num2[p3])
				{
					money++;
					p1++;
					p3++;
					continue;
				}
				if(num1[p2]>num2[p4])
				{
					money++;
					p2--;
					p4--;
					continue;
				}
				if(num1[p1]<num2[p4])
					money--;
				if(num1[p1]>num2[p4])
					money++;
				p1++;
				p4--;
			}
		}
		cout<<money*200<<endl;
	}
	return 0;
}