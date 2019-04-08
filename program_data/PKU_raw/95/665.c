main()
{
	int compare(char str1[80],char str2[80]);
	int k=0;
	char str1[80],str2[80];
	gets(str1);
	gets(str2);
	k=compare(str1,str2);
	if(k==0) printf("=\n");
	else if(k==1) printf(">\n");
	else if(k==-1) printf("<\n");
}
int compare(char str1[80],char str2[80])
{
	int i,m;
	for(i=0;i<80;i++)
	{
	if(str1[i]!='\0'&&str2[i]!='\0'){
		if(str1[i]==str2[i]||(str1[i]==str2[i]+32||str1[i]==str2[i]-32)) continue;
		else if(str1[i]!=str2[i]+32||str1[i]!=str2[i]-32){
			if(str1[i]<='Z'&&str2[i]<='Z'||str1[i]>='a'&&str2[i]>='a')
				{
			     if(str1[i]>str2[i]) {m=1;break;}
                 else {m=-1;break;}
				 }
			 else if(str1[i]<='Z'&&str2[i]>='a')
			    {
			     if(str1[i]>str2[i]-32) {m=1;break;}
                 else {m=-1;break;}
			    }
		     else if(str1[i]>='a'&&str2[i]<='Z')
			    {
			     if(str1[i]>str2[i]+32) {m=1;break;}
                 else {m=-1;break;}
			    }
		}
		
	}
	if(str1[i]=='\0'&&str2[i]=='\0') {m=0;break;}
	else continue;
	}
	return m;
}
