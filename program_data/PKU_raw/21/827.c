int main(){
	int n,i,j=0,p;
	float in[301],sum=0,sm;
	float b[301],max=0, t[301],f[301];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>in[i];
		sum+=in[i];}
	float k;
	k=sum/n;//?????
for(i=0;i<n;i++){
	if(in[i]>k){
	b[i]=in[i]-k;}
	else b[i]=k-in[i];
}
for(i=0;i<n;i++){
	if(b[i]>max)
		max=b[i];
}
for(i=0;i<n;i++){
	if(b[i]==max){
		t[j]=b[i];
		f[j]=in[i];
		j++;
	}
}
for(i=0;i<j;i++){
	for(p=j;p>i;p--){
		if(f[p]<f[p-1]){
			sm=f[p];f[p]=f[p-1];f[p-1]=f[p];
		}
	}
}
for(i=0;i<j-1;i++)
	cout<<f[i]<<',';
cout<<f[j-1]<<endl;
return 0;
}