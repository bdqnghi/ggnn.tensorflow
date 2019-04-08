void main()
{
	int i,j,n,m;
	char a[100],b[100],c[100];
	
    scanf("%s%s",a,b);

	n=strlen(a);
     m=strlen(b);
      if(n!=m)
         printf("NO");
     else 
 {
	for(i=0;i<=n;i++)
	{
	
		for(j=0;j<=n;j++)
		{
			if(a[i]==b[j])
			   
				
			{c[i]=b[j];
			b[j]='\0';
                   
				 
				   break;}
				 
		}
	}
		
			
			if(strcmp(a,c)==0)
				printf("YES");
			else 
				printf("NO");
	 }
}
