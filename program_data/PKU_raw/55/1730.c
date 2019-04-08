
	
int main(){
	long int a,b,sum,c=0;
	char str[100],str1[100];
	cin>>a>>str>>b;
	for(int i=0;str[i]!='\0';i++)
		if((str[i]>='a')&&(str[i]<='z'))
			str[i]-=32;
	sum=strlen(str);
	for(int i=0;i<sum;i++){
		if(str[i]>='0'&&str[i]<='9')
			c+=(int)pow((double)a,(double)(sum-1-i))*(str[i]-48);
		if(str[i]>='A'&&str[i]<='Z')
			c+=(int)pow((double)a,(double)(sum-1-i))*(str[i]-55);
	}
	int Len=0; 
	if(c==0)
		cout<<"0";
	else{
		while(c>0){
			int t=c%b;
			if (t>=10) str1[Len]='A'+t-10;
				else str1[Len]='0'+t;
			c/=b;Len++;
		}
		for(int j=Len-1;j>=0;j--) 
			cout<<str1[j];
	}
	return 0; 
}