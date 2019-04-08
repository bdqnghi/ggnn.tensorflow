int main()
{  int sy=0,sm=0,sd=0,ey=0,em=0,ed=0,sum1=0,sum2=0,i=0,m1=0,m2=0,c=0,t=0;
    scanf("%d %d %d %d %d %d",&sy,&sm,&sd,&ey,&em,&ed);
    for(i=1;i<sm;i++)
    { switch(i)
     { case 1:
	   case 3:
	   case	5:
		case 7:
		case 8:
		case 10:
		case 12:m1=m1+31;break;
		case 4:
		case 6:
		case 9:
		case 11:m1=m1+30;break;
		case 2:if((sy % 4 == 0 && sy % 100 != 0) || (sy % 400 == 0) )	
		        { m1=m1+29;
					}
				else m1=m1+28;
			
			}
		
		}
		t=(sy-1)/4-(sy-1)/100+(sy-1)/400;
    sum1=(sy-1)*365+t+m1+sd;
     for(i=0;i<em;i++)
    { switch(i)
     { case 1:
	   case 3:
	   case	5:
		case 7:
		case 8:
		case 10:
		case 12:m2=m2+31;break;
		case 4:
		case 6:
		case 9:
		case 11:m2=m2+30;break;
		case 2:if((ey % 4 == 0 && ey % 100 != 0) || (ey % 400 == 0) )	
		        { m2=m2+29;
					}
				else m2=m2+28;
			
			}
		
		}
		t=(ey-1)/4-(ey-1)/100+(ey-1)/400;
		sum2=(ey-1)*365+t+m2+ed;
		c=sum2-sum1;
		printf("%d",c);
    
				return(0);
	}