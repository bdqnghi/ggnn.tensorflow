void main()
{
	char str1[1000],str2[100],str3[100],str4[100],str5[2]=" ",str[100]="";
	int i,k=0;
	gets(str1);
	gets(str2);
	gets(str3);
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]!=' ')
		{
			str4[k]=str1[i];
			k=k+1;
		}
		else
		{
			str4[k]='\0';
			k=0;
			if(strcmp(str4,str2)==0)
				strcat(str,str3);
			else
				strcat(str,str4);
			strcat(str,str5);
		}
	}
	str4[k]='\0';
    if(strcmp(str4,str2)==0)
				strcat(str,str3);
			else
				strcat(str,str4);
		printf("%s",str);
}


