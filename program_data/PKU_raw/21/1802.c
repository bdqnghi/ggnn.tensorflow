int main(){
	int n;
	double sum=0,ave,max=0;
	cin>>n;
	int a[n],i;
	double b[n],x=0,y=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
    ave=sum/n;
    for(i=0;i<n;i++){
    	b[i]=abs(a[i]-ave);
        if(max<b[i]) max=b[i];
    }
    for(i=0;i<n;i++){
    	if (b[i]==max && x==0) x=a[i];
    	if (b[i]==max && x!=0) y=a[i];
    }

    if(x>y) cout<<y<<","<<x;
    if(x<y) cout<<x<<","<<y;
    if(x==y) cout<<x;
    return 0;
}
