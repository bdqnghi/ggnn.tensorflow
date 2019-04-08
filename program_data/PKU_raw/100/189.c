void main()
{
    char a[400];
    scanf("%s",a);
    int n,t=0,i;
    n=strlen(a);
    for(i=0;i<=n-1;i++)
          if(a[i]<='z'&&a[i]>='a')
           {
              t=1;
              break;
           }
     if(t==0) printf("No");
	 else
	 {
		 char c;
		 for(c='a';c<='z';c=c+1)
		 {
			 int num=0;
			 for(i=0;i<=n-1;i++)
				 if(a[i]==c) num=num+1;
             if(num!=0) printf("%c=%d\n",c,num);
		 }
	 }
}


