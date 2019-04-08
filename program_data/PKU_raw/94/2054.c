int main(){
int n,a[500],i,j,s=0,t,x=0;
cin>>n;
for(i=0;i<n;i++)
	cin>>a[i];
for(j=0;j<n;j++){
	if(s==n)
		break;
	if(s==n-1&&a[n-1]%2==0)
		break;
	for(i=s;i<n;i++)
		if(a[i]%2==1){
			a[j]=a[i];
			s=i+1;
			break;
		}
	x++;
}
for(i=0;i<x-1;i++)
	for(j=0;j<x-1-i;j++){
		if(a[j]<a[j+1]){
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
cout<<a[x-1];
for(i=x-2;i>=0;i--)
	cout<<","<<a[i];
return 0;
}