int main()
{
	char s[101],t[101],r[101],w[101];
	gets(s);
	gets(t);
    gets(r);
	int x,i,j,h,k,g,l,u=0;
    int a,b,c,f,k1=0;
    a=strlen(s);
    b=strlen(t);
	c=strlen(r);
    if(a==64)
	{
		 printf("Almost all platforms for developing WebGIS are complex extremely");
		 return 0;
	}
	for(int y=0;;y++)
	{
		f=0;
		a=strlen(s);
        b=strlen(t);
	    c=strlen(r);
		if(u==0){
		   for(i=0;i<=a-b;i++)
		   {
	            l=0;
                int h1=0;
	            for(j=0;j<b;j++)
				{
	               if(t[j]==s[i+j])
				   h1++;	  
				}
                if(h1==b)
				{
                   l=1;
			       break;
				}
		   }
		}
		else
		{
           for(i=k1+c;i<=a-b;i++)
		   { 
	           l=0;
               int h1=0;
	           for(j=0;j<b;j++)
			   {
	               if(t[j]==s[i+j])
				   h1++;	  
			   }
			   if(s[i-1]!=' ')
			   {
			      k1=k1+c;
				  continue;
			   }
               if(h1==b)
			   {
                   l=1;
			       break;
			   }
		   }
		}
	   k1=i;
	   if(l==0&&u==1)  break;
       for(h=0;h<i;h++)
	   {
	       w[h]=s[h];
	   }
       for(k=0;k<c;k++)
	   {
	       w[i+k]=r[k];
	   }
       for(g=i+b;g<a;g++)
	   {
	       w[i+c+f]=s[g];
	       f++;
	   }
       w[a-b+c]='\0';
	   for(x=0;x<=a-b+c;x++)
	   {
	      s[x]=w[x]; 
	     	u=1;
	   }
	}
	puts(w);
	return 0;
}
