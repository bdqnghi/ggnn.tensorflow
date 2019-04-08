int main(){
	int a[1000],b[1000],d[1000],i,j,p;
	char c[1000];
	for(i=0;;i++){
		cin>>a[i];
		if(cin.get()!=','){
			i++;
			break;
		}
	}
	for(j=0;j<i;j++){
		cin>>b[j];
		cin.get(c[j]);
	}
	for(j=0;j<i;j++){
		for(p=a[j];p<b[j];p++){
			d[p]++;
		}
	}
	p=0;
	for(j=0;j<1000;j++)
		if(d[j]>p)
			p=d[j];
	cout<<i<<" "<<p<<endl;
	return 0;
}