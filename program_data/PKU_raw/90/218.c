
int search(int x,int y,int z)
{
	int s=0,i;
	if(y>1)
		for(i=z;i<=x/y;i++)
			s+=search(x-i,y-1,i);
	else s=1;
	return s;
}

int main()
{ 
	int t,M,N,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>M>>N;
		cout<<search(M,N,0)<<endl;
	}
	return 0;
}