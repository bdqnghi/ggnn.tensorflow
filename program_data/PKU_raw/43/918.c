

int main()
{
int a,b,n,p,q,i,j;
scanf("%d",&n);
for(a=3;a<=n/2;a=a+2)
 { for(i=3;i<=sqrt(a);i=i+2)
      { p=a%i;
        if(p==0) break;
       }
    if(p!=0 ) 
	{b=n-a;
          if (b!=1) 
     {for(j=3;j<=sqrt(b);j=j+2)
      {q=b%j;
       if(q==0) break;
	 }
      if(q!=0)
	   printf("%d %d\n",a,b);}}
  }
 return 0;
}
