main()
{
	char a[252],b[252],c[252];
	scanf ("%s",a);
	scanf ("%s",b);
	int i,k,m,n,p,d,e;
	d=strlen(a);
	e=strlen(b);
 	if (d<e)
    {for (i=1;i<=d;i++)
	 { c[e-i+1]=a[d-i]+b[e-i]-'0';
	   if (c[e-i+1]>=58)
	     {b[e-i-1]++; 
	      c[e-i+1]=c[e-i+1]-10;}
     }
     for (k=e-d-1;k>=1;k--)
	 	{
		 		if (b[k]>=58)
				 {b[k]=b[k]-10;	
				 b[k-1]++;}
				c[k+1]=b[k];
	    }
	    c[1]=b[0];
	    m=strlen(b);
    }
	else if(d>e)
	{for (i=1;i<=e;i++)
	 { c[d-i+1]=a[d-i]+b[e-i]-'0';
	   if (c[d-i+1]>=58)
	     {a[d-i-1]++; 
	      c[d-i+1]=c[d-i+1]-10;}
     }
     for (k=d-e-1;k>=1;k--)
	 	{
		 		if (a[k]>=58)
				 {a[k]=a[k]-10;	
				 a[k-1]++;}
				c[k+1]=a[k];
	    }
	    c[1]=a[0];
	    m=strlen(a);
    }
    else if (strlen(a)==strlen(b))
    {   
		for (i=strlen(b);i>0;i--)
        {c[i+1]=a[i]+b[i]-'0';
        if (c[i+1]>=58)
	     {b[i-1]++;
	      c[i+1]=c[i+1]-10;}}
		c[1]=a[0]+b[0]-'0';
		m=strlen(b);
	}
    if (c[1]>=58)
    {c[0]='1';
     c[1]=c[1]-10;
	 for (int l=0;l<m+1;l++)
	 printf ("%c",c[l]);}
	else if (c[1]=='0'&&m==01)
	printf ("0");
	else
	{for (int l=1;l<m+1;l++)
	 {if (c[l]!='0')
	 {p=l;
	 break;}}
	 for (i=p;i<m+1;i++)
	 printf ("%c",c[i]);}
	 }