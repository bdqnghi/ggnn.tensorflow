int main()
{
	int n,i,l;
	char a[50][50],b[50][50];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++){
		l=0;
		l=strlen(a[i]);
		if(a[i][l-3]=='i'&&a[i][l-2]=='n'){
			strncpy(b[i],a[i],l-3);
		
		}
		else{strncpy(b[i],a[i],l-2);}
    	printf("%s\n",b[i]);
	}
         return 0; 
}
