int main()
{
	char a[51][33];
	int i,n,j,s;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
		s=strlen(a[i]);
		for(j=s-1;j>0;j--){
			if(a[i][s-1]=='r'&&a[i][s-2]=='e')
				a[i][j-1]='\0';
			else if(a[i][j]=='y'&&a[i][j-1]=='l')
                a[i][j-1]='\0';
			else if(a[i][j]=='g'&&a[i][j-1]=='n'&&a[i][j-2]=='i')
				a[i][j-2]='\0';
		}
	}
    for(i=0;i<n;i++){
	    	printf("%s\n",a[i]);
	}
	return 0;
}