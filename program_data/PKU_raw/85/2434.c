int main()
{
	int n,flag;
	char a[22];
	cin>>n;
	cin.get();
	while(n--){
		flag=0;
		cin.getline(a,22);
		for(int i=0;a[i]!='\0';i++){
			if(a[0]<65||(a[0]>90&&a[0]<97&&a[0]!=95)||a[0]>122){
				cout<<"no"<<endl<<endl;
				flag=1;
				break;
			}
			else if(a[i]<48||(a[i]>57&&a[i]<65)||(a[i]>90&&a[i]<97&&a[i]!=95)||a[i]>122){
				cout<<"no"<<endl<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)
			cout<<"yes"<<endl<<endl;
	}
	return 0;
} 