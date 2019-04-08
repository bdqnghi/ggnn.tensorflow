int main()
{ int i,n,q,w,e,r,t,out,a[4];
  i=1;
  while(i<5)
  {	
  scanf("%d",&n);
  q=n/10000;
  w=(n-10000*q)/1000;
  e=(n-10000*q-1000*w)/100;
  r=(n-10000*q-1000*w-100*e)/10;
  t=n-10000*q-1000*w-100*e-10*r;
   if(e==0) a[i]=t*10+r;
	 else if(w==0) a[i]=t*100+r*10+e;
    else if(q==0) a[i]=t*1000+r*100+e*10+w; 
   else a[i]=t*10000+r*1000+e*100+w*10+q;
   i=i+1;
  }
	printf("%d\n%d\n%d\n%d\n",a[1],a[2],a[3],a[4]);
   return 0;
}
