int main()                                                                                                                   //?????
{
	int n,i,p[200],j,m;                                                                                                      //??????
	char str[100];                                                                                                           //??????
	cin>>n;                                                                                                                  //?????n
	for(i=0;i<200;i++)
		p[i]=1;                                                                                                              //?????????????1
	for(i=0;i<n;i++){
		getchar();
		cin.get(str,200);                                                                                                    //?????
		m=strlen(str);
		if(((str[0]<='z')&&(str[0]>='a'))||((str[0]>='A')&&(str[0]<='Z'))||(str[0]=='_')){                                   //????
			for(j=1;j<m;j++){
				if(((str[j]<'a')||(str[j]>'z'))&&((str[j]<'A')||(str[j]>'Z'))&&((str[j]<'0')||(str[j]>'9'))&&(str[j]!='_')){ //?????
					p[i]=0;break;
				}}}
		else p[i]=0;
	}
	for(i=0;i<n;i++)
		cout<<p[i]<<endl;                                                                                                     //????
	return 0;
}
