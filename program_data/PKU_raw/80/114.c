int main()
{
    int a,b,c,d,e,f,x,y,z,n;
    x=0;
    y=0;
    z=0;
    scanf("%d %d %d\n%d %d %d",&a,&b,&c,&d,&e,&f);
    
    for(;a<d;)
    {
              if((a%4==0&&a%100!=0)||(a%400==0))
              x=x+366;
              else
              x=x+365;
              a++;
    }
    
    if(b<=e)
    {
              for(;b<e;)
              {
                           switch(b)
                           {
                                     case 1:y=y+31;break;
                                     case 3:y=y+31;break;
                                     case 5:y=y+31;break;
                                     case 7:y=y+31;break;
                                     case 8:y=y+31;break;
                                     case 10:y=y+31;break;
                                     case 12:y=y+31;break;
                                     case 4:y=y+30;break;
                                     case 6:y=y+30;break;
                                     case 9:y=y+30;break;
                                     case 11:y=y+30;break;
                                     default:if((d%4==0&&d%100!=0)||(d%400==0))
                                             
                                                                                 y=y+29;
                                                                                 
                                             
                                             else
                                                 y=y+28;
                                                 
                           }
                           b++;
              }
    }
    else
    {         
              for(;e<b;)
              {
                           switch(e)
                           {
                                     case 1:y=y-31;break;
                                     case 3:y=y-31;break;
                                     case 5:y=y-31;break;
                                     case 7:y=y-31;break;
                                     case 8:y=y-31;break;
                                     case 10:y=y-31;break;
                                     case 12:y=y-31;break;
                                     case 4:y=y-30;break;
                                     case 6:y=y-30;break;
                                     case 9:y=y-30;break;
                                     case 11:y=y-30;break;
                                     default:if((d%4==0&&d%100!=0)||(d%400==0))
                                             
                                                                                 y=y-29;
                                                                                 
                                             
                                             else
                                                 y=y-28;
                                                 
                           }
                           e++;
              }
    }     

    
    z=f-c;
    n=x+y+z;
    printf("%d\n",n);
        return 0;
}