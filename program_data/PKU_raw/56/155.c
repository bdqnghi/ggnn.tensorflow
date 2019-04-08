int main(int argc, char* argv[])
{   
	char str[10],a;
	int i=0,n;
	gets(str);
	char *p=str;
	do{
         i++;
		 p++;
		 a=*p;
	}while(a!='\0');
	n=i;
	char s[10];
	for(i=0;i<n;i++)s[i]=str[n-i-1];
	for(i=0;i<n;i++)printf("%c",s[i]);
    return 0;
}