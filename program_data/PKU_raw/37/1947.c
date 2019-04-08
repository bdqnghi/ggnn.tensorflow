int main()
{
	int n;
	cin>>n;
	int i,j;
	int count1=1,count2=0;
	char thechar;
	char str[100001];
	while(n--){
		memset(str,0,sizeof(str));
		count1=1,count2=0;
		cin>>str;
		//cout<<str<<' '<<endl;
		for(i=0;i<strlen(str);i++){
	         if(str[i]!='*'){
	        	 thechar=str[i];
	         //cout<<thechar<<endl;
	         for(j=i+1;j<strlen(str);j++)
	        	 if(str[j]==thechar){
	        		 count1++;
	        	     str[j]='*';
	        	 }

	         if(count1==1){
	        	 count2++;
	        	 cout<<thechar<<endl;
	        	 break;
	         }
	         }
	         count1=1;
		}
		if(count2==0)
			cout<<"no"<<endl;

	}

}
