void main()
{
	int i,p1,p2,l1=0,l2=0,t=1,a1=0,a2=10;
	char n[100],s[200]={" "};
	gets(n);
    for(i=0;n[i]!='\0';i++)
	{
		 if(t==1&&n[i]!=' ') l2++;
	     if(t==1&&n[i]==' ')
		 {
			 t=0;
			 if(l2<a2) {a2=l2;p2=i;}
			 l2=0;
		 }
		 if(n[i+1]=='\0'&&l2<a2) {a2=l2+1;p2=i+1;}
		 if(t==0&&n[i]!=' ') {t=1;l2++;}
	}
    strcat(s,n);t=0;
	for(i=0;s[i]!='\0';i++)
	{
         if(t==0&&s[i]==' ') l1=0;
		 if(t==0&&s[i]!=' ') 
		 {
			 t=1;
			 l1++;
		 }
		 if(t==1&&s[i]!=' ') l1++;
		 if(t==1&&s[i]==' ')
		 {
			 t=0;
			 if(l1>a1) {a1=l1;p1=i;}
			 l1=0;
		 }
		 if(t==1&&s[i+1]=='\0'&&(l1+1)>a1) {a1=l1;p1=i+1;}
	}
	for(i=(p1-a1+1);i<p1;i++) printf("%c",s[i]);
		printf("\n");
	for(i=(p2-a2);i<p2;i++) printf("%c",n[i]);	
}




