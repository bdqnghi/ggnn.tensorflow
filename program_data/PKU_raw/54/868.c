int main()
{
 int m,n,k,t,x,y;
 scanf("%d %d",&n,&k);
 for(t=1,x=1,y=1;t<=n;t++)
 {
	 m=n*x+k;
	if(t!=n)
	 if(m%(n-1)==0){x=m/(n-1);}
	 else {m=0;t=0;;y++;x=y;}
 }
 printf("%d",m);
return 0;
}