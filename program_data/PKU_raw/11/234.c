
void main()
{
	int y,m,d,a,i,ans;
    for (i=1;i<=5;i++)
    {
    scanf("%d%d%d",&y,&m,&d); 
    
	if (y%4!=0)
	    a=1;
		else if (y%100!=0) 
			a=0;
			else if (y%400!=0)
			     a=1;
			     else 
			     a=0;
    if (a)
	{
		switch(m)
		{
		  case 1: ans=d; break;
          case 2: ans=31+d; break;
		  case 3: ans=59+d; break;
		  case 4: ans=90+d; break;
		  case 5: ans=120+d; break;
		  case 6: ans=151+d; break;
		  case 7: ans=181+d; break;
		  case 8: ans=212+d; break;
		  case 9: ans=243+d; break;
		  case 10: ans=273+d; break;
		  case 11: ans=304+d; break;
		  case 12: ans=334+d; break;
		}
	}
        else 
		{
		  switch(m)
		  {
		    case 1: ans=d; break;
            case 2: ans=31+d; break;
		    case 3: ans=60+d; break;
		    case 4: ans=91+d; break;
		    case 5: ans=121+d; break;
		    case 6: ans=152+d; break;
		    case 7: ans=182+d; break;
		    case 8: ans=213+d; break;
		    case 9: ans=244+d; break;
		    case 10: ans=274+d; break;
		    case 11: ans=305+d; break;
		    case 12: ans=335+d; break;
		  }
		}
	printf("%d\n",ans); 
         }
}
