int main()
{
    char days[7][8]={"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};
    int years[4]={365,365,365,366};
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	unsigned int m,d,i,k,j;
	
	unsigned int td,a1,a2;
    unsigned int  y;
	td=0; k=0;
	
    scanf ("%d%d%d",&y,&m,&d);

	a1=(y-1)/100;
	a2=(y-1)/400;
	j=a1-a2;
     k=(y-1)/4;

	 td=5*k;
	td=td+((y-1)%4);
	td=td-j;
	for (i=0;i<(m-1);i++)
	{
	   td=td+month[i];
	   if ((y%100)==0)
	   {
	       if (((y%400)==0) && (i==1) ) td++;

	   }
	   else
	   {
	      if (((y%4)==0) && (i==1) ) td++;
	   }
    }
    	td=td+d;
	
		 		td=td%7;
        if (td==0) td=7;
    

    printf("%s\n",days[td-1]);
   return 0;

}