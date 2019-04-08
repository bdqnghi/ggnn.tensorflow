
int main()
{	char str1[81],str2[81];
int a,i;
    cin.getline(str1,81);
	cin.getline(str2,81);
	for(i=0;str1[i]!='\0';++i){
		if(str1[i]>=65&&str1[i]<=90)
			str1[i]+=32;
	}
	for(i=0;str2[i]!='\0';++i){
		if(str2[i]>=65&&str2[i]<=90)
			str2[i]+=32;
	}
	a=strcmp(str1,str2);
   if(a==0)
	   cout<<'='<<endl;
   if(a>0)
	   cout<<'>'<<endl;
   if(a<0)
	   cout<<'<'<<endl;
	return 0;
}