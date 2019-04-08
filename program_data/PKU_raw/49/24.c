void main()
{
	int i,j,k,p,q,l,m,n;
	char a[500];
     gets(a);
	l=strlen(a);
	for(k=0;k<l-1;k++)
	{
		if(a[k]==a[k+1])
			printf("%c%c\n",a[k],a[k+1]);
	}
	  for(i=2;i<l;i++)
	  {
		  for(k=0;k<l;k++)
		  {
	        	p=k;q=i+k;
		    m=p;n=q;
		    while(a[p]==a[q]&&p<=q)
			{
		    	p++;
			   q--;
			}
		       if(q-p<1)
			   {
			       for(j=m;j<n;j++)
			       printf("%c",a[j]);
			       printf("%c\n",a[n]);
			   }
		  }
	  }
	
}

