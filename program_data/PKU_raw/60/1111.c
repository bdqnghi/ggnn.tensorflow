int main()
{
	int sushu(int k);
	int n,i;
    cin>>n;
	if(n<5)
	{
		cout<<"empty"<<endl;
	}
	else
	{
	    for(i=2;i<n-1;i++)
		{
		     if(sushu(i)==1&&sushu(i+2)==1)
			 {
			       cout<<i<<' '<<i+2<<endl;
			 }
		}
	}
	return 0;
}
 
int sushu(int k)
{
	int t,j,l=0;
    if(k>2)
	{
	    for(j=2;j<k;j++)
		{
		     if(k%j==0)
			 {
			      l++;
			 }
		     else
			 {
			      l=l;
			 }
		}
	}
	else if(k==1||k==2)
	{
		l=0;
	}
	if(l==0) t=1;
	else  t=0;
	return(t);
}
	


			


