int main()
{
	int n,i,j,p=0;
	char s[30];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);
		int z=strlen(s);
		for(j=0;j<z;j++)
		{
			if(j==0&&(s[j]>'/'&&s[j]<':')){
				printf("no\n");
				break;}
			if(s[j]>'/'&&s[j]<':')
				p++;
			else 
				p+=0;
			if(s[j]>'@'&&s[j]<'[')
					p++;
			else 
				p+=0;
			if(s[j]>'a'&&s[j]<'z')
					p++;
			else 
				p+=0;
			if(s[j]=='a'||s[j]=='z')
					p++;
			else 
				p+=0;
			if(s[j]=='_')
					p++;
			else 
				p+=0;
			
		}
		
		
		if(p==z)
			printf("yes\n");
		else if(p!=0)
			printf("no\n");
		p=0;
	}
	return 0;
}
