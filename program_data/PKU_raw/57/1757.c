void main()
{
	char str[20],t[20];
	int len,i,n,j;
	scanf("%d",&n);
	for(j=0;j<n;j++){
		scanf("%s",str);
		len = strlen(str);
		if(str[len-1]=='r'){
			for(i=0;i<len-2;i++){
				t[i] = str[i];
			}
			t[i] = '\0';
		}
		if(str[len-1]=='g'){
			for(i=0;i<len-3;i++){
				t[i] = str[i];
			}
			t[i] = '\0';
		}
		if(str[len-1]=='y'){
			for(i=0;i<len-2;i++){
				t[i] = str[i];
			}
			t[i] = '\0';
		}
		printf("%s\n",t);
	}
	
}