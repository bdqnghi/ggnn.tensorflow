int main()
{
	int year,mon,g,i,e=0,day;
    int montha[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int monthb[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};

	scanf("%d%d%d",&year,&mon,&g);

	for(i=0;i<mon;i++)
    {
		if(year%4==0)
		{
	    	if(year%100==0&&year%400!=0)
			{
	    	e=e+montha[i];
			
		    day=e+g;
			}
	       else 
		   {
	        e=e+monthb[i];
	    	day=e+g;
		   }
		}
        if(year%4!=0)
		{
		  e=e+montha[i];
		  day=e+g;
		}
	}
	   printf("%d",day);
	   return 0;
}
