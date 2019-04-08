
int main()
{
	char str[30];
	char *p;   //:????
	gets(str);
	p=str;  //:????

	for (int i=0;i<strlen(p)-1;i++)  //:????
	{
		if ( p[i]>=48 && p[i]<=57 && (p[i+1]<48 || p[i+1]>57) )  //:?????????????????
			cout<<p[i]<<endl;
		else if (p[i]>=48 && p[i]<=57 && (p[i+1]>=48 && p[i+1]<=57) )
			cout<<p[i];
	}
	if (p[strlen(p)-1]>=48 && p[strlen(p)-1]<=57)  //:?????????
		cout<<p[strlen(p)-1];
	cout<<endl;
	return 0;
}
