int main()
{  int l,m,n,t,i,s;
  scanf("%d%d%d",&l,&m,&n);
   if(l%4==0&&l%100!=0)
	   t=29;
   if(l%4!=0)
	   t=28;
   if(l%100==0&&l%400!=0)
      t=28;
   if(l%400==0)
	   t=29;
   int a[13]={0,31,t,31,30,31,30,31,31,30,31,30,31};
      if(m==1)
		  s=n;
	  else
		s=n;
     for(i=1;i<m;i++)
	 {s=s+a[i];}
	 printf("%d",s);
	 return 0;
}