int ss(int x)   /*???????*/
{
  int k,y,z;
  k=(int)sqrt(x);

  for(y=3;y<=k;y=y+2)
  if(x%y==0)break;
  if(y>k)z=1;else z=0;
  return(z) ;
}

void main()
{
  int n,i;   /* i????????n???  */
  int p,m;   /*p?????????m=n-p*/
  scanf("%d",&n);
  for(i=6;i<=n;i+=2)
  {
  p=3;
     while(p<i-2)
	 {
       if(ss(p))
	   {
	   m=i-p;
	   if(ss(m)) {printf("%d=%d+%d\n",i,p,m);break;}
	   else p+=2;
	   }else p+=2;
	 }

  }
}

