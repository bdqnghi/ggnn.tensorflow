int main()
{
	char s[250];
	char t[250];
	int i,j=0;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{    
		if(s[i]!=' ')
		{	 
			t[j]=s[i];
			j++;
		}
		else
		{	 
			t[j]=' ';
			j++;
			while(s[i]==' ')
			{ 
				i++;}
				i=i-1;	
			
		}
	}
		t[j]='\0';
		puts(t);
return 0;
}