

int main(int argc)
{    int i,n,a[7];
int b[6]={100,50,20,10,5,1};
     cin>>n;
	 for (i=1;i<=6;i++)
	 { a[i]=n/b[i-1];
	 n=n%b[i-1];
	 cout<<a[i]<<endl;}
return 0;
}