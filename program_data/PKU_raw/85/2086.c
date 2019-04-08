

int main()
{
	int n;
	cin>>n;
	cin.get();
	while(n--){
		char str[100];
		cin.getline(str,100);
		int k=strlen(str),flag=0;
		if(str[0]>='0'&&str[0]<='9')//??????????????
			cout <<"no"<<endl;
		else{
			for(int i=0;i<k;i++){
				if(str[i]>='a'&&str[i]<='z')
					flag++;
				else if(str[i]>='A'&&str[i]<='Z')
					flag++;
				else if(str[i]>='0'&&str[i]<='9')
					flag++;
				else if(str[i]=='_')
					flag++;
				else 
					break;
			}
			if (flag==k)
				cout<<"yes"<<endl;
			else
				cout << "no" <<endl;
		}
	}
	return 0;
}
