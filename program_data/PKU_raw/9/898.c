int main()
{
	int n,i,s=0,j=0,k=0;
	struct patient{
		int age;
		char id[10];
	}patient[100],old[100],young[100],temp;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>patient[i].id>>patient[i].age;
		if(patient[i].age>=60)
		{
			old[k]=patient[i];
			k++;
		}
		else
		{
			young[s]=patient[i];
			s++;
		}
	}
	for(i=k-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(old[j].age<old[j+1].age)
			{
				temp=old[j];
				old[j]=old[j+1];
				old[j+1]=temp;
			}
		}		
	}
	for(i=0;i<k;i++)
		cout<<old[i].id<<endl;
	for(i=0;i<s;i++)
		cout<<young[i].id<<endl;
	return 0;
}
