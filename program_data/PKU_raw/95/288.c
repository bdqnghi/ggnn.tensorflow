int main()
{
	char a[999], b[999];
	int m,n,c,i,r,e;
	gets(a);m=strlen(a);
	gets(b);n=strlen(b);
	r=c=(m>n)?m:n;
	for(i=0;i<c;i++)
	{
		if(a[i]>64&&a[i]<91)
		
			a[i]=a[i]+32;
        if(b[i]>64&&b[i]<91)
			b[i]=b[i]+32;
		
       if((a[i]==b[i])||(a[i]==b[i]+32)||(a[i]==b[i]-32))
	   r--;
	  else if(a[i]>b[i])
	  {
		  e=0;
		   printf(">");break;
	   
	  }
		   else if(a[i]<b[i])
		   {
		  e=0;
           printf("<");break;
		   }
		
	}
       if(r==0) printf("=");

	return 0;
}