/*
 * ????????C????????
 * ?????
 */

int main(){
	int n;int flag=0,i=0,l=0;     //flag????????
	cin>>n;	cin.get();        //????
	while(n>0){
		char a[81];
	cin.getline(a,81);
		flag=0;i=0;l=0;
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||a[i]=='_')
		 {
		  flag=1;   //???????
		  i++;
		 }
		l=strlen(a);
		while(flag&&i<l){
			if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||a[i]=='_'||(a[i]>='0'&&a[i]<='9'))
			  {
			   flag=1;
			   i++;
			  }      //??????????
			  else
			   flag=0;
		}
		if(flag==1)cout<<'1'<<endl;else cout<<'0'<<endl;
		n--;
	}
	return 0;
}
