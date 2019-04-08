int main()
{
     int i,n,j,a;
	 char s[1000][22];
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
			 scanf("%s",s[i]);
	 for(i=0;i<n;i++){ 
		 a=1;
		 if(((s[i][0]>='a'&&s[i][0]<='z')||
				 (s[i][0]>='A'&&s[i][0]<='Z')||
				 (s[i][0]=='_'))){
			for(j=1;s[i][j]!='\0';j++){
			        if(!((s[i][j]>='a'&&s[i][j]<='z')||
				       (s[i][j]>='A'&&s[i][j]<='Z')||
				       (s[i][j]=='_')||
					   (s[i][j]>='0'&&s[i][j]<='9')))
					   a=0;
			}
		 }
         else
			 a=0;
		 if(a==1)
		 printf("yes\n");
	     if(a==0)
		 printf("no\n");	
	}
	 return 0;

}