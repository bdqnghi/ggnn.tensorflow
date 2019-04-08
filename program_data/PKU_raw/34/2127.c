/**
* @file homework.cpp
* @author ???
* @date 2011-11-13
* @description
* ??????: ????
*/
void buzhou(int);

int main()
{
	int n;
	cin>>n;
	buzhou(n);
	
	return 0;
}


void buzhou(int nf)
{
	while (nf!=1)
	{
	if (nf%2==1)
	{
		cout<<nf<<"*3+1="<<nf*3+1<<endl;
		nf=nf*3+1;
	}
	else
	{
		cout<<nf<<"/2="<<nf/2<<endl;
		nf=nf/2;
	}
	}
	cout<<"End";

}