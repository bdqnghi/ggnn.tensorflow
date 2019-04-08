int main (){
	char a[101],b[101],d[101];
	char c[101];
	int n,i,j,k,h;
    cin>>n;
	for(i=0;i<n;i++){
		cin>>a>>b;
		for(j=0;j<101;j++)
			if(a[j]=='\0')break;
		for(k=0;k<101;k++)
			if(b[k]=='\0')break;
		for(h=0;k>=0;k--,j--,h++){
			if(a[j]-b[k]<0){
				c[h] = a[j]-b[k]+'0'+10;
				a[j-1]=a[j-1]-1;}
			else c[h] = a[j]-b[k]+'0';

		}
		for(;j>=0;j--,h++)
			c[h]=a[j];

     for(k=h-1;k>0;k--)
    	 if(c[k]!='0')break;
     for(;k>0;k--)
    	 cout<<c[k];
     cout<<endl;}
	return 0;
}