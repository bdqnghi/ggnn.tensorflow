void main()
{int n,k,i;
 long int m,x;
 scanf("%d %d",&n,&k);
 for(m=k+n;m<10000000;m=m+n)
 {x=m;
 if(x%(n-1)==0) 
 {for(i=1;i<n;i++)
 {if(x%(n-1)!=0) break;
  x=x*n/(n-1)+k;
  if(i==n-1) {printf("%d",x);m=10000001;}
 }
 }
 }
}