  void main()
  {
     int a,b,c,d,e,x;
	 scanf("%d",&x);
	     e=x%10; 
	     d=((x-e)/10)%10;

    c=((x-d*10-e)/100)%10;

 b=((x-10*d-e-100*c)/1000)%10;
    a=((x-b*1000-c*100-d*10-e)/10000)%10;

if (a!=0)
    printf("%d%d%d%d%d",e,d,c,b,a);
    else if (b!=0)
		printf("%d%d%d%d",e,d,c,b);
 else if (c!=0)
		printf("%d%d%d",e,d,c);
     


 else if (d!=0)
		printf("%d%d",e,d);
 else if (e!=0)
		printf("%d",e);

    else printf("0");





  }