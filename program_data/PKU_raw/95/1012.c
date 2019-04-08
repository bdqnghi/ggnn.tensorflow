int main()
{
	int flag=0,i;
	char str1[80],str2[80];
	cin.getline(str1,80);
	cin.getline(str2,80);
	for( i=0;str1[i]!='\0'&&str2[i]!='\0';i++)
	{
	    if(str1[i]<91&&str2[i]<91)
		{
			if(str1[i]<str2[i]){cout<<'<'<<endl;flag=1;break;}
			else if(str1[i]>str2[i]){cout<<'>'<<endl;flag=1;break;}
			else continue;
		}
		 if(str1[i]>91&&str2[i]<91)
		{
			 str1[i]=str1[i]-32;
			 if(str1[i]<str2[i]){cout<<'<'<<endl;flag=1;break;}
			 else if(str1[i]>str2[i]){cout<<'>'<<endl;flag=1;break;}
			 else continue;
		}
		 if(str1[i]<91&&str2[i]>91)
		{
			 str2[i]=str2[i]-32;
			if(str1[i]<str2[i]){cout<<'<'<<endl;flag=1;break;}
			else if(str1[i]>str2[i]){cout<<'>'<<endl;flag=1;break;}
			else continue;
		}if(str1[i]>91&&str2[i]>91)
		{
			if(str1[i]<str2[i]){cout<<'<'<<endl;flag=1;break;}
			else if(str1[i]>str2[i]){cout<<'>'<<endl;flag=1;break;}
			else continue;
		}

	}
	if(flag==0)
	{if(str1[i]=='\0'&&str2[i]=='\0')cout<<'='<<endl;
	else if(str1[i]!='\0')cout<<'>'<<endl;
	else cout<<'<'<<endl;}
	return 0;
}
