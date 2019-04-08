int main()
{
	char string[100],str1[100],str2[100],str3[200];
	int n1,n2,i=0,s,j,a=0,b;
	gets(string);gets(str1);gets(str2);
	n1=strlen(str1);
	n2=strlen(str2);
	while(i<100)
	{b=0;
		for(j=0;j<n1;j++)
		{
			if((string[i+j]==str1[j]))
				b+=1;
			else b=0;}
		
		
		
		
		
		
		
		if(i==0){if(b==n1&&string[i+n1]==' ')
			{
				for(s=0;s<n2;s++)
				{str3[a]=str2[s];a++;}
		i+=n1;}
		else
		 {str3[a]=string[i];a+=1;i+=1;}}
		
		
		
		
		
		
		
		else
		{if(b==n1&&string[i+n1]==' '&&string[i-1]==' ')
			{
				for(s=0;s<n2;s++)
				{str3[a]=str2[s];a++;}
		i+=n1;}
		else
		 {str3[a]=string[i];a+=1;i+=1;}}
		
		
		
		
	}
	printf("%s",str3);
	return 0;
}