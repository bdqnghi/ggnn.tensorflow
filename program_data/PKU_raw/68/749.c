void main()
{ int n,k=6,p,q,i,j;
  scanf("%d",&n);
loop:while(k<=n)
  {for(p=3;p<=k/2;p=p+2)
  { for(i=3;i<=(int)sqrt(p);i=i+2) 
      if(p%i==0) break;
      if(i>(int)sqrt(p)) 
	  {q=k-p;
       for(j=3;j<=(int)sqrt(q);j=j+2)
       if(q%j==0) break;
       if(j>(int)sqrt(q)) 
	   { printf("%d=%d+%d\n",k,p,q); k=k+2;goto loop;}}}
  
  k=k+2;}
}
