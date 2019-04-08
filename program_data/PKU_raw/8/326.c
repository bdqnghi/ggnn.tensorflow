int first[100];
int second[100];
int combination[200];
int a,b; //??????
void cin_number()
{
	int i;
	cin >>a>>b;
	for (i=0;i<a;i++)
	{
		cin >>first[i];
	}
	for (i=0;i<b;i++)
	{
		cin >>second[i];
	}
}   //?????????????????
void rank()
{
	int i,j,temp;
	for (i=(a-1);i>0;i--)
	{
		for (j=0;j<i;j++)
		{
			if (first[j]>first[j+1])
			{
				temp=first[j];
				first[j]=first[j+1];
				first[j+1]=temp;
			}
		}
	}
	for (i=(b-1);i>0;i--)
	{
		for (j=0;j<i;j++)
		{
			if (second[j]>second[j+1])
			{
				temp=second[j];
				second[j]=second[j+1];
				second[j+1]=temp;
			}
		}
	}
}
void combine()
{
	int i;
	for (i=0;i<a;i++)
	{
		combination[i]=first[i];
	}
	for (i=0;i<b;i++)
	{
		combination[a+i]=second[i];
	}
}
void cout_combination()
{
	int i;
	for (i=0;i<(a+b-1);i++)
		cout <<combination[i]<<" ";
	cout <<combination[i]<<endl;
}
int main()
{
	cin_number();
	rank();
	combine();
	cout_combination();
	return 0;
}