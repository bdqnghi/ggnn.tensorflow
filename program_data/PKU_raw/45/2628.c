int main() 
{ 
	char s[100],l[100]; 
	
	char *p,*a; 
	int i;

	scanf("%s%s",s,l);

	p=strstr(l,s);
	a=l;
	for(i=0;;i++)
	{
		if(a+i==p)
		{
			printf("%d",i);
			break;
		}
	}
	return 0; 
} 