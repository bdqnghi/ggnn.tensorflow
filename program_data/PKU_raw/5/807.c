int main()
{  
	int i,n=0,k=0;
	double m;
	scanf("%lf",&m);
	char a[100];
	char b[100];
	scanf("%s\n%s",a,b);
	int l=strlen(a),t=strlen(b);
	   for(i=0;i<l;i++)
	   {
	   if(a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T') k++;
	   if(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T') k++;
	   }
	  if(k>0) { printf("error");return 0;}
      
	 
	if(l==t) 
	 {
	for (i=0;i<=l;i++)
	{
		
	  if(a[i]==b[i]) n++;
	}
	  if((1.00*n/l)>m)  printf("yes");
	  
	  else printf("no");
	   
	   
	}
	 
	 else printf("error");
   return 0; 
}