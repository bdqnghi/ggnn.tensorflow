int main()
{
	long a;
		scanf("%d",&a);
    int b,c,d,e,f;
	b=a/10000;
	c=(a-b*10000)/1000;
	d=(a-b*10000-c*1000)/100;
	e=(a-b*10000-c*1000-d*100)/10;
        f=a-b*10000-c*1000-d*100-e*10;
	if (!(b==0))
		printf("%d%d%d%d%d",f,e,d,c,b);
	else 
	   if(!(c==0))
          printf("%d%d%d%d",f,e,d,c);
	   else
		   if(!(d==0))
			   printf("%d%d%d",f,e,d);
		   else
			   if(!(e==0))
                   printf("%d%d",f,e);
			   else
				   printf("%d",f);
				   return 0;
}
