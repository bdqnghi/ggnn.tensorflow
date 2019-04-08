int main()
{
  char str1[80],str2[80];
  int i;
  cin.getline(str1,80);
  cin.getline(str2,80);
     for(i=0;str1[i]!='\0';i++)
	 {
	  if(str1[i]>='a'&&str1[i]<='z')
 		  str1[i]=str1[i]-32;
	 }
     for (i=0;str2[i]!='\0';i++)
	{ if(str2[i]>='a'&&str2[i]<='z')
        str2[i]=str2[i]-32;
	}
	if(strcmp(str1,str2) == 0)
		cout<<'=';
	else if(strcmp(str1,str2) > 0)
	cout<<'>';
	else if(strcmp(str1,str2) < 0)
	cout<<'<';
	return 0;

}