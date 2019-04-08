int main()
{
	int i,j,a,n,b;
	char s[100];
	char str[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int c[100];
	scanf("%d%s%d",&a,s,&b);
	n=strlen(s);
	for(i=0;i<n;i++){
		if(s[i]>='a'&&s[i]<='z')
		   c[i]=s[i]-'a'+10;
        if(s[i]>='A'&&s[i]<='Z')
		   c[i]=s[i]-'A'+10;
        if(s[i]>='0'&&s[i]<='9')
		   c[i]=s[i]-'0';
	}
	int k=0;
	for(i=0;i<n;i++){
	    k=k*a;
		k+=c[i];	
	}
	j=0;
	if(k==0)
	printf("0");
	else{
	  while(k!=0){
		s[j]=str[k%b];
		k=k/b;
		j++;		
	    }
	}
	for(i=j-1;i>=0;i--){
		printf("%c",s[i]);
	}
}