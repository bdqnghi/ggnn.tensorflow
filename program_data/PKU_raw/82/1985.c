
int main() {
	int n,i,j,k=0,m=0,a[100],b[100],c[100],max=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>b[i]>>c[i];
	for(i=0;i<n;i=j+1){
		for(j=i,m=0;j<n&&b[j]>=90&&b[j]<=140&&c[j]>=60&&c[j]<=90;j++,m++);
	a[k++]=m;
	}
	for(i=0;i<k;i++){
		if(a[i]>=max)
		   max=a[i];}
	cout << max << endl;
	return 0;
}