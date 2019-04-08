int john (int,int );
main()
{   int j,m,n,i=0,a[10];
	//printf("enter n & m :\n");
	 
	while (1)
    { 
	  scanf("%d%d",&n,&m);
	  
	  if (m==0 && n==0)
		  break;
	  else
	  {a[i]=john(n,m);
	  i++;}
	
	}
 for (j=0;j<i;j++)
	 printf("%d\n",a[j]);
    
}






int john(int n,int m)
{int i,j,t,a[301];
 

 
 for(i=1;i<=n;i++)
	 a[i]=1;
 j=n;
 for(i=1,t=0;j>1;i=i+1)
 { if(i>n)
     i=i-n;
    if(a[i]!=0)
	  {t++;
        if(t==m) 
		{t=0; 
	     a[i]=0;j--;}
	  }
	else continue;
 }
for (i=1;i<=n;i++)
  if (a[i]==1) break;
	 return (i);
}