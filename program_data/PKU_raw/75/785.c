int main()
{
	char x_in[10000],y_in[10000];
	int i,j=0,n1,n2,n3,x[10000]={0},y[10000]={0},k=0,count[1000]={0},max=0;
	cin.getline(x_in,10000,'\n');
	
	cin.getline(y_in,10000,'\n');
	n1=strlen(x_in);
	n3=strlen(y_in);
	for(i=n1;i>=0;i--){
		if(x_in[i]<='9'&&x_in[i]>='0'){
			x[j]=x[j]+(x_in[i]-'0')*pow(10.0,k);
			k++;
		}
		else if((x_in[i-1]<='9'&&x_in[i-1]>='0')&&(x_in[i]<'0'||x_in[i]>'9')){
			k=0;
			j++;}
	}
	n2=j;
	j=0;
	k=0;
	for(i=n3;i>=0;i--){
		if(y_in[i]<='9'&&y_in[i]>='0'){
			y[j]=y[j]+(y_in[i]-'0')*pow(10.0,k);
			k++;
		}
		else if((y_in[i-1]<='9'&&y_in[i-1]>='0')&&(y_in[i]<'0'||y_in[i]>'9')){
			k=0;
			j++;}
	}
	for(i=1;i<1000;i++){
		for(j=0;j<=n2;j++){
			if(i>=x[j]&&i<y[j])
				count[i]++;}}
	for(i=0;i<1000;i++){
		if(count[i]>max)
			max=count[i];
	}
	cout<<n2<<" "<<max<<endl;
	return 0;
}



