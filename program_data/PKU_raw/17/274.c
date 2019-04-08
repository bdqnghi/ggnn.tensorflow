void pro(char *s)
{
	char a[444];
	char *p;
	int i,j,k,t;
	i=-1;
	p=s;
	while(*p!='\0')
	{
		if (*p=='(') {i++; a[i]=*p;}
	    else if (*p==')')
	    { 
		j=i;
		while ((j>=0) && (a[j]!='(')) j--;
		if (j==-1) {i++; a[i]=*p;} else {a[j]=' '; i++; a[i]=' ';}
	     }
	     else {i++; a[i]=' ';}
		p++;
	}

	a[i+1]='\0';
	strcpy(s,a);
	
}

void print(char *s)
{
	char *p;
	p=s;
	while (*p!='\0') 
	{if (*p=='(') *p='$'; else if (*p==')') *p='?';
	 p++;
	}
     puts(s);
}
int main()
{  
	int l;
	char s[323];
	//freopen("tt.in","r",stdin);
	//freopen("tt.out","w",stdout);
	gets(s);
	while (s[0]!='\0')
	{
		
		puts(s);
		pro(s);
		print(s);
		s[0]='\0';
		gets(s);
	}
	return 0;
}