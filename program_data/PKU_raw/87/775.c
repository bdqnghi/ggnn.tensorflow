int main()
{
  int a,b,c,d,e,f,s,m,h,sum[100],i,k=0;
  for(i+0;i<=100;i++)
  {
  scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
  if(a==0)
	  break;
  else
  {
     d+=12;
	  if(f-c<0)
	 {
	   if(e==0)
	   {
	     d=d-1;e=60;
	   }
	   e=e-1;
	   f=f+60;
	 }
	  s=f-c;
	  if(e-b<0)
	  {
	    d=d-1;e=e+60;
	  }
	  m=e-b;
	  h=d-a;
	  sum[k]=3600*h+60*m+s;
	  k++;
  }
  }
  for(i=0;i<k;i++)
  {
  printf("%d\n",sum[i]);
  }
return 0;
}
