int main(){
	int n,m,i,j,s=0,y;
	char a[100],b[100];
	cin>>n>>a>>m;
	for(i=0;a[i]!='\0';i++)
		if(a[i]>96&&a[i]<123)a[i]=a[i]-32;//????????
	for(i=0;a[i]!='\0';i++){
		if(a[i]>64&&a[i]<91)s=s*n+(int)a[i]-55;
		else s=s*n+a[i]-48;//?n?????????
	}
	b[0]=0;
	if(s == 0)
		cout << 0 << endl;
	else{
		for(;s>0;s=(s-y)/m){
			y=s%m;
			for(j=0;b[j]!=0;j++);
			for(;j>=0;j--)b[j+1]=b[j];
			if(y>9)b[0]=y+55;
			else b[0]=y+48;//???????m??
		}
		cout<<b<<endl;
	}
	return 0;
}