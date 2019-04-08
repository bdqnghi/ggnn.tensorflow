int main() {
	int a[10],n,i=0;
	cin>>n;
		a[i]=n/100;
		n=n%100;
		i++;
		a[i]=n/50;
		n=n%50;
		i++;
		a[i]=n/20;
		n=n%20;
		i++;
		a[i]=n/10;
		n=n%10;
		i++;
		a[i]=n/5;
		n=n%5;
		i++;
		a[i]=n;
		for ( i=0;i<=5;i++)
		{
			cout<<a[i]<<endl;
		}
		return 0;
}
