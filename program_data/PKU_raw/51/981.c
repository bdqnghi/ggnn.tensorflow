
int main()
{
	int n,k,l;
	cin>>n;

	char ch[501];//?????????
	int a[500]={0};//?????????
	memset(ch,'\0',sizeof(ch));
	cin>>ch;
	int len;
	len=strlen(ch);
	
		//cout<<len<<endl;
	char temp1[6]={'\0'};
	char temp2[6]={'\0'};
	int i,j=0;
	for(i=0;i<len-n+1;i++)
		if(a[i]==0){
			for(k=0;k<n;k++)temp1[k]=ch[i+k];
			for(j=i+1;j<len-n+1;j++)
				if(a[j]==0){
					for(l=0;l<n;l++)temp2[l]=ch[j+l];
					if(strcmp(temp1,temp2)==0){a[i]++;a[j]=-2;}
				}}


	int m=0;//??????
		for(i=0;i<len-n+1;i++){//cout<<a[i]<<endl;
			m=max(m,a[i]);}
		if(m==0)cout<<"NO"<<endl;else{cout<<m+1<<endl;

		for(i=0;i<len-n+1;i++)
		if(a[i]==m){
			for(k=0;k<n;k++)
				cout<<ch[i+k];
			cout<<endl;}
				}
		
	return 0;
}