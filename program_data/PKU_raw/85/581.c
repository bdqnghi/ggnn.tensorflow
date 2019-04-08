int main()
{
	int n,j,i;
	scanf("%d",&n);
	char a[100],c;
for(i=0;i<n;i++){
	a[0]=' ';
	
		scanf("%s",a);
     for(j=0;j<strlen(a);j++){
		if(a[0]!='0'&&
			a[0]!='1'&&
a[0]!='2'&&a[0]!='3'&&a[0]!='4'&&a[0]!='5'&&
a[0]!='6'&&a[0]!='7'&&a[0]!='8'&&a[0]!='9'&&(

			(a[j]>='a'&&a[j]<='z')||(a[j]=='_')||
	(a[j]>='A'&&a[j]<='Z')||(a[j]>='0'&&a[j]<='9')))
	continue;
		else printf("no\n");break;}
	 if(j==strlen(a))printf("yes\n");
}
	
	
	
	return 0;
}