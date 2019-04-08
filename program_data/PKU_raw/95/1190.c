int main()
{
     char str1[100],str2[100];
	 int i,flag=1;
	 cin.getline(str1,100);
	 
     cin.getline(str2,100);
	 for(i=0;str1[i]!='\0';i++)
	 { 
	     if(str1[i]-'a'>=0&&str1[i]-'z'<=0)
			 str1[i]=str1[i]-'a'+'A';
		
	 }
	  for(i=0;str2[i]!='\0';i++)
	 { 
	     if(str2[i]-'a'>=0&&str2[i]-'z'<=0)
			 str2[i]=str2[i]-'a'+'A';
		
	 }
	  for(i=0;str1[i]!='\0';i++)
	  {
	     if(str1[i]==str2[i])continue;
		 else if(str1[i]<str2[i])
		 {cout<<'<';
		 flag=0;
		 break;}
		 else {cout<<'>';
		 flag=0;
		 break;}
	  }
	  if(flag==1)cout<<'=';
      
	  return 0;
}
 
 
