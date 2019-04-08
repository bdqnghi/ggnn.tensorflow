int A[200]={0};
int B[100]={0};
int a,b;

void shuzu()//????
{
	cin>>a>>b;
	for(int i=0;i<a;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<b;i++)
	{
		cin>>B[i];
	}
	
}
void paixu()//?????????
{
	int p;
	for(int j=1;j<=a-1;j++)
	{
		for(int i=0;i<a-j;i++)
		{
			if(A[i]>A[i+1])
			{
				p=A[i];
				A[i]=A[i+1];
				A[i+1]=p;
			}
		}
	}
	for(int j=1;j<=b-1;j++)
	{
		for(int i=0;i<b-j;i++)
		{
			if(B[i]>B[i+1])
			{
				p=B[i];
				B[i]=B[i+1];
				B[i+1]=p;
			}
		}
	}

}
void hebing()//??????????
{
	for(int i=0;i<b;i++)
	{
		A[a+i]=B[i];
	}
	for(int i=0;i<a+b-1;i++)
	{
		cout<<A[i]<<' ';

	}
	cout<<A[a+b-1];
}

int main()
{
	
	shuzu();
         paixu();
         hebing();
		
	return 0;
}
