main(){
	int n,i,t,j;
	cin>>n;
	char a[100];

	for (i=0;i<=n;i++){
      cin.getline(a,100);
      if (a[0]=='\0')
    	  continue;

    if (a[0]=='_' || (a[0]>='a' && a[0]<='z') || (a[0]>='A' && a[0]<='Z')) t=1; //??????????
	else {
		cout<<"0"<<endl;
		continue;
		}

	for (j=1;j<=strlen(a)-1;j++)                                                //????????
      if (!((a[j]>='0'&& a[j]<='9') || (a[j]>='a' && a[j]<='z') || (a[j]>='A' && a[j]<='Z') || a[j]=='_'))
      {t=0;
       break;
      }
	cout<<t<<endl;
	}
	return 0;
}