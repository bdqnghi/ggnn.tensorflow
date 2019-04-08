void f(int aa[], int bb[],int c[],int t);


int d[20][101]={0};
main()
{
	int i,n,lens1,lens2,r=0,h=0,w1,w2;
	int t[20];
	scanf("%d",&n);
    
	for (i=0;i<n;i++)
	{
		char a[101],b[101];
	    int aa[101],bb[101],c[101]={0};
      scanf("%s",a);
      scanf("%s",b);
	  lens1=strlen(a);
	  lens2=strlen(b);
	  t[i]=(lens1>lens2)?lens1:lens2;
	  
	  for (r=0;r<strlen(a);r++)
		  aa[r+101-strlen(a)]=a[r]-'0';
	  for (r=0;r<strlen(b);r++)
		  bb[r+101-strlen(b)]=b[r]-'0';
	  for (r=101-t[i];r<101-t[i]+(lens1-lens2);r++)
		  bb[r]=0;
	  
	  
	  f(aa,bb,c,t[i]);
	  
	  for (r=100;r>=101-t[i];r--)
		  d[h][r]=c[r];
	  h++;
     
	  printf("\n");
	}

	for (r=0;r<h;r++)
	{
		for (w1=101-t[r];w1<=100;w1++)
			if (w1!=0) 
			break;
		
		for (w2=w1;w2<=100;w2++)
			printf("%d",d[r][w2]);
		    printf("\n");
	}
	printf("\n");

}



void f(int aa[],int bb[],int c[],int t)
{
	int i;
    
	for (i=100;i>=101-t;i--)
	 c[i]=aa[i]-bb[i];
	  
	for (i=100;i>=101-t;i--)
	 if (c[i]<0)
	  {c[i]=c[i]+10;
	   c[i-1]--;
	  }
	
	 return;
}