int main(){
	int a[20001],i,j,k,m=0,n=0;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=2;i<=n;i++)
			{for(j=1;j<i;j++)
			 {if(a[j]==a[i])
			   {
				 a[i]=10000;

			     }
		    }}
		cout<<a[1];
		for(i=2;i<=n-m;i++)
			if(a[i]!=10000)
			{cout<<" "<<a[i];}
		return 0;
}
