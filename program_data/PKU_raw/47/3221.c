
int main() {
	int n,temp,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int *p=NULL;
	     p=a;
	     for(i=0;i<n/2;i++)
	     {
	    	 temp=*(p+i);
	    	 *(p+i)=*(p+n-1-i);
	    	 *(p+n-1-i)=temp;
	     }
	for(i=0;i<n-1;i++)
		cout<<*(p+i)<<" ";
	cout<<*(p+n-1);
	return 0;
}
