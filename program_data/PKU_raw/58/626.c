int main(){
	int n,i,j;
	cin>>n;
	int b[n];
	char a[n][100];
	for(i=0;i<=n;i++){
		cin.getline(a[i],100);
	    b[i]=strlen(a[i]);}

	for(i=1;i<=n;i++)
		if(((a[i][0]=='_')||((a[i][0]>='a')&&(a[i][0]<='z'))||((a[i][0]>='A')&&(a[i][0]<='Z')))==1){
			for(j=0;j<strlen(a[i]);j++)
				if (((a[i][j]=='_')||((a[i][j]>='a')&&(a[i][j]<='z'))||((a[i][j]>='A')&&(a[i][j]<='Z'))||((a[i][j]>='0')&&a[i][j]<='9'))==0){cout<<"0"<<endl;break;}
			if((j==strlen(a[i]))==1)
			cout<<"1"<<endl;
		}
				else
			cout<<"0"<<endl;
	return 0;//??
}



