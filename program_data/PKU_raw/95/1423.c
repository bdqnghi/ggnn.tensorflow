







main()
{
 char a[90],b[90];
 int i,j,k,m,n;k=0;
 gets(a);
 gets(b);
 m=strlen(a);
 n=strlen(b);
   
 
 
 
 for(i=0;i<m;i++)
   {if(a[i]>=97&&a[i]<=122)
		   a[i]=a[i]-32;
	   if(b[i]>=97&&b[i]<=122)
		   b[i]=b[i]-32;}
          for(i=0;i<m;i++)
		  {if(a[i]>b[i])
			  {printf(">");
			  k=1;break;}
			  else
				  if(a[i]<b[i])
				  {printf("<");
				  k=1;break;}}
		  if(k==0)
			  printf("=");
		  
	}
				 
