
int main()
{
	int i,s;
	char a[256],b[256];
	gets(a);
	gets(b);
	for(i=0;i<strlen(a);i++)
		if(a[i]>96)a[i]-=32;
	for(i=0;i<strlen(b);i++)
		if(b[i]>96)b[i]-=32;
	s=strcmp(a,b);
	if(s<0)cout<<'<';
	if(s>0)cout<<'>';
	if(s==0)cout<<'=';
	return 0;
}