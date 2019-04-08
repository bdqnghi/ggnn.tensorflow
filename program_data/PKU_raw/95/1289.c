int main()
{
	char str1[80],str2[80],i;
	cin.getline(str1,80);
	cin.getline(str2,80);
	for(i=0;i<80;i++){
		if(str1[i]>=97&&str1[i]<=122)
			str1[i]-=32;
		if(str2[i]>=97&&str2[i]<=122)
			str2[i]-=32;
	}
	if(strcmp(str1,str2)==0)
		cout<<"="<<endl;
	if(strcmp(str1,str2)==1)
		cout<<">"<<endl;
	if(strcmp(str1,str2)==-1)
		cout<<"<"<<endl;
return 0;
}