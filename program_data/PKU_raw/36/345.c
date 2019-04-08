void main()
{
	char c[1000],d[1000],a[1000],b[1000];
	char e;
	int i,n,m,p=0;
	int c1[26],c2[26],d1[26],d2[26];
	scanf("%s %s",&c,&d);
	 m=strlen(d);
	 n=strlen(c);
	 for(i=0;i<n;i++)
    	a[i]=c[i];
	 for(i=0;i<m;i++)
		b[i]=d[i];
	 for(i=0;i<26;i++)
	 {
		 c1[i]=0;
	     c2[i]=0;
		 d1[i]=0;
		 d2[i]=0;
	 }
    for(i=0;i<n;i++)
	 {
	  if(a[i]>='a'&&a[i]<='z')
	    c1[a[i]-'a']++;
	  else if(a[i]>='A'&&a[i]<='Z')
        c2[a[i]-'A']++;
	  }
    for(i=0;i<m;i++)
	 {
	  if(d[i]>='a'&&d[i]<='z')
	    d1[d[i]-'a']++;
	  else if(d[i]>='A'&&d[i]<='Z')
         d2[d[i]-'A']++;
	}
	for(i=0;i<26;i++)
	{
		if(c1[i]==d1[i]&&c2[i]==d2[i]) 
			p++;
		else p--;
	}
	    if(p==26)   printf("YES\n");
		else     printf("NO\n");
}
