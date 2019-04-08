int main (){
	char a[33];
	int i,j,n,m;
	scanf("%d",&n);
	for(j=1;j<=n;j++){
	scanf("%s",&a);
	m=strlen(a);
		if(a[m-1]=='r'&&a[m-2]=='e'){
			a[m-2]=0;		
				printf("%s\n",a);
				
		}
		if(a[m-1]=='y'&&a[m-2]=='l'){
			a[m-2]='\0';		
				printf("%s\n",a);

		}
		if(a[m-1]=='g'&&a[m-2]=='n'&&a[m-3]=='i'){
			a[m-3]='\0';		
				printf("%s\n",a);
			
		}
	if((a[m-1]!='r'&&a[m-2]!='e')&&(a[m-1]!='y'&&a[m-2]!='l')&&(a[m-1]!='g'&&a[m-2]!='n'&&a[m-3]!='i'))
			printf("%s\n",a);
		
	}
return 0;
}