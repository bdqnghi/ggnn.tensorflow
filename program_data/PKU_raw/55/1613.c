int main(){
	char str[10001];
	char* array[36]={"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
	long int a,b,n,m[10001],lstr,i,lb,a1;
	cin>>a;
	cin.get();
	cin>>str;
	cin>>b;
	lstr=strlen(str);
	n=0;lb=0;
	for(i=0;i<lstr;i++){
		if(str[i]>=65&&str[i]<=90)
		    m[i]=str[i]-'A'+10;
		else if(str[i]>=97&&str[i]<=122)
			m[i]=str[i]-'a'+10;
		else
			m[i]=str[i]-'0';
	}
	a1=a;
	n+=m[lstr-1];
	for(i=lstr-2;i>=0;i--){
		n=n+m[i]*a;
		a=a*a1;
	}
	for(i=1;i<10000;i++){
		if(n<b){
			cout<<array[n];
			break;
		}
		else{
			m[i]=n%b;
		    n-=m[i];
		    n=n/b;
			lb++;
		}
	}
	for(i=lb;i>=1;i--)
		cout<<array[m[i]];
return 0;
}