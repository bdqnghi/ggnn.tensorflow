
int countt;
void f(int p,int q)
{
	for(int m=p;m<=sqrt(q);m++)
	{
		if(q%m==0)
		{countt++;
		f(m,q/m);}
	}
   
}
int main()
{   
	int n,num,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num;
		countt=0;
		for(int k=2;k<=sqrt(num);k++)
		{   
		    if(num%k==0)
			{
				countt++;
			   f(k,num/k);
			}
		}
		cout<<countt+1<<endl;;
	}
	return 0;
}