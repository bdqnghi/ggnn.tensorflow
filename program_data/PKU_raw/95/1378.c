int main()                  //???
{
	char str1[80],str2[80]; //?????????
	int i;
	cin.getline(str1,80);   //???????
	cin.getline (str2,80);
	for(i=0;i<strlen(str1);i++)
	{
		if( (int)str1[i]>64 && (int)str1[i]<91 ) str1[i]+=32; //????????????
	}
	for(i=0;i<strlen(str2);i++)
	{
		if( (int)str2[i]>64 && (int)str2[i]<91 ) str2[i]+=32; //????????????
	}
	if(strcmp(str1,str2)>0) cout<<">"<<endl;        //????
	else if(strcmp(str1,str2)<0) cout<<"<"<<endl;
	else cout<<"="<<endl;

	return 0;
}