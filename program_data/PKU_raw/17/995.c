int main()
{
	int i,j,k,n,m;
	char a[200],b[200]={'0'},*kuoh[200];
	scanf("%d\n",&n);
	for(k=0;k<n;k++){
		gets(a);
		m=strlen(a);
    for(i=0;i<m;i++){
    	if(a[i]=='(')b[i]='$';
    	else if(a[i]==')')b[i]='?';
    	else b[i]=' ';
    }
    for(i=0;i<m;i++){
    	if(b[i]=='?')
    	for(j=i;j>=0;j--) if(b[j]=='$') {b[j]=' ';b[i]=' ';break;}
    }
    puts(a);
    puts(b);
	for(i=0;i<m;i++) b[i]='\0';
	}
	
	return 0;
}
