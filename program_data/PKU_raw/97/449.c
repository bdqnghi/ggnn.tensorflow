int main()
{
	int n,a=0,b=0,c=0,d=0,e=0,f=0;
	 scanf("%d",&n);
    if (n/100>0)
		a=n/100;
	if ((n/50-a*2)>0)
        b=n/50-a*2;
	if (((n-b*50)/20-a*5)>0)
		c=(n-b*50)/20-a*5;
	if ((n/10-a*10-b*5-c*2)>0)
		d=n/10-a*10-b*5-c*2;
	if ((n/5-20*a-10*b-c*4-d*2)>0)
		e=n/5-20*a-10*b-c*4-d*2;
	if ((n-100*a-50*b-20*c-10*d-5*e)>0)
        f=n-100*a-50*b-20*c-10*d-5*e;
	 printf("%d\n",a);
      printf("%d\n",b);
       printf("%d\n",c);
         printf("%d\n",d);
           printf("%d\n",e);
              printf("%d\n",f);
  


return 0;
}