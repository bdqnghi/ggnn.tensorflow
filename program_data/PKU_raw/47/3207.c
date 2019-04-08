
int main() {
    int n,a[100],temp=0;         //????
    cin>>n;
    int *p=NULL,*q=NULL;          //??????p?q?????
    for(p=a;p<a+n;++p)        //??????
    	cin>>*p;
    for(p=a,q=a+n-1;p<q;++p,--q)         //????
    {
    	temp=*p;
    	*p=*q;
    	*q=temp;
    }
    p=a;
    cout<<*p;              //?????
    for(p=a+1;p<a+n;++p)
    	cout<<' '<<*p;
	return 0;
}
