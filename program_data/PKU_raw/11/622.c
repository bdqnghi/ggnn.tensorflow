int main()
{
	int y,m,d,i;
	scanf("%d%d%d",&y,&m,&d);
	if (((y%4==0)&&(y%100!=0))||(y%400==0))
	{

	switch (m)
	{
	    case 1:
		    i=d;
                      break;
		case 2:
			i=31+d;
                            break;
		case 3:
			i=31+29+d;
                            break;
		case 4:
			i=31+29+31+d;
                            break;
		case 5:
			i=31+29+31+30+d;
                            break;
		case 6:
        	                  i=31+29+31+30+31+d;
                            break;
		case 7:
	                  i=31+29+31+30+31+30+d;
                            break;
		case 8:
                           i=31+29+31+30+31+30+31+d;
                            break;
		case 9:
			i=31+29+31+30+31+30+31+31+d;
                            break;
		case 10:
	                   i=31+29+31+30+31+30+31+31+30+d;
                            break;
		case 11:
                            i=31+29+31+30+31+30+31+31+30+31+d;
                            break;
		case 12:
                            i=31+29+31+30+31+30+31+31+30+31+30+d;
                            break;
	
	}

	}else
	{	
		switch (m)
	{ 
		case 1:
		    i=d;break;
		case 2:
			i=31+d;break;
		case 3:
			i=31+28+d;break;
		case 4:
			i=31+28+31+d;break;
		case 5:
			i=31+28+31+30+d;break;
		case 6:
        	i=31+28+31+30+31+d;break;
		case 7:
	        i=31+28+31+30+31+30+d;break;
		case 8:
            i=31+28+31+30+31+30+31+d;break;
		case 9:
			i=31+28+31+30+31+30+31+31+d;break;
		case 10:
	        i=31+28+31+30+31+30+31+31+30+d;break;
		case 11:
             i=31+28+31+30+31+30+31+31+30+31+d;break;
		case 12:
             i=31+28+31+30+31+30+31+31+30+31+30+d;break;
	
	}
	}
	printf("%d\n",i);
	return 0;
}
