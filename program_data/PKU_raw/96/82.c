main()
 {
   char s[100];
     int a[100],i,j,len,c;
     long b;
    scanf("%s",s);
    b=0;
    len=strlen(s);
   for (i=0;i<len;i++)
		{
		if (s[i]=='0')
		  {
		  c=0;
		  }
		else if (s[i]=='1')
		  {
		  c=1;
		  }
		else if (s[i]=='2')
		  {
		  c=2;
		  }
		else if (s[i]=='3')
		  {
		  c=3;
		  }
		else if (s[i]=='4')
		  {
		  c=4;
		  }
	else if (s[i]=='5')
		  {
		  c=5;
		  }
	else if (s[i]=='6')
		  {
		  c=6;
		  }
	else if (s[i]=='7')
		  {
		  c=7;
		  }
	else if (s[i]=='8')
		  {
		  c=8;
		  }
	else if (s[i]=='9')
	      {
	      	c=9;
	      	}
	b=b*10+c;
	a[i]=b/13;
	b=b-a[i]*13;
	 }
	  i=0;
		 do
			{
		      i=i+1;
		      }
		while (a[i]==0);
		 for (j=i;j<len-1;j++)
		   printf("%d",a[j]);
		   printf("%d\n",a[len-1]);
		   printf("%d\n",b);
		   getchar();
		   getchar(); 
		   }