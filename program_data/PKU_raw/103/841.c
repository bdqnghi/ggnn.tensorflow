int main()
{
	char str[1005];
	char mem[1005];
	int  num[1005]={0};
	cin >> str;
	int len;
	len=strlen(str);
	int i,j,m=0,n=0;
	int sum=0;
	for(i=0;i<1000;i++){
		if(str[n]<97){
			mem[m]=str[n];
		}
		else{
			mem[m]=str[n]-32;
		}
		for(j=n;j<len;j++){
			if(str[j]==mem[m] || ((str[j]-mem[m])==32))
			{
				sum++;
			}
			if( str[j]!=mem[m] && (str[j]-mem[m])!=32 && j!=len-1 ){
				num[m]=sum;
				sum=0;
				n=j;
				break;
			}
			if(j==len-1 && str[j]!=mem[m] && (str[j]-mem[m])!=32 ){
				num[m]=sum;
				if(str[j]<97){
				mem[m+1]=str[j];}
				else
					mem[m+1]=str[j]-32;
				num[m+1]=1;
				m+=2;
				n=len;
				break;
			}
			if(j==len-1 && (str[j]==mem[m] || (str[j]-mem[m])==32) ){
				num[m]=sum;
				m++;
				n=len;
				break;
			}
		}
		if(n<len-1){
			m++;
			continue;
		}
	}
	for(i=0;i<m;i++){
	cout <<"("<<mem[i]<<","<<num[i]<<")";
	}
	return 0;
}