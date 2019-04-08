int su(int n)
{
int a=n;
int b=0;
int c=sqrt(n);
for(int d=2;d<=c;d++)
{
if((a%d)==0) b=b+1;
}
b=(b==0);
return(b);
}
int main()
{
	
	int b;
	cin>>b;
	for(int i=1;i<=(b+4)/4;i++)
	{int t=2*i+1;
	 
	if ((su(t)==1)&&(su(b-t)==1)&&(t<=(b-t)))
		cout<<t<<" "<<b-t<<endl;

	}

}
