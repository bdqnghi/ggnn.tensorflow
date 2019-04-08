void main()
{int n,i,k,x,s,q,p;

q=1;
scanf("%d %d",&n,&k);

 q=1;
loop:s=q*n+k;i=1;
loop2:x=s/(n-1);
 if(s%(n-1)!=0)
 {q=q+1;goto loop;};
 if(s%(n-1)==0) {s=s+x+k;i++;if(i<n) goto loop2;else printf("%d",s);}


}