int main()
{
    int sy,sm,sd,ey,em,ed,day,a,b,c,d,i;
    scanf("%d%d%d",&sy,&sm,&sd);
    scanf("%d%d%d",&ey,&em,&ed);

    day=0;

    if((sy+1)<ey)
    {
      for(i=sy+1;i<ey;i++)
    {
          a=i%4;
          if(a==0)
          {
            b=i%100;
            if(b==0)
            {
                c=i%400;
                if(c==0)
                {day=day+366;}
                else
                {day=day+365;}
            }
            else
            {day=day+366;}
          }
          else
          {day=day+365;}
    }

    for(i=sm;i<=12;i++)
    {
        if(i==2)
        {day=day+28;}
        else if((i==1)||(i==3)||(i==5)||(i==7)||(i==8)||(i==10)||(i==12))
        {day=day+31;}
        else if((i==4)||(i==6)||(i==9)||(i==11))
        {day=day+30;}
    }
    day=day-sd;
    if(em>1)
    {
    for(i=1;i<em;i++)
    {
        if(i==2)
        {day=day+28;}
        else if((i==1)||(i==3)||(i==5)||(i==7)||(i==8)||(i==10)||(i==12))
        {day=day+31;}
        else if((i==4)||(i==6)||(i==9)||(i==11))
        {day=day+30;}
    }
    }
    day=day+ed;
    if(sm<=2)
    {
      a=sy%4;
          if(a==0)
          {
            b=sy%100;
            if(b==0)
            {
                c=sy%400;
                if(c==0)
                {day=day+1;}
                else
                {day=day;}
            }
            else
            {day=day+1;}
          }
          else
          {day=day;}
    }
    if(em>2)
    {
        a=ey%4;
          if(a==0)
          {
            b=ey%100;
            if(b==0)
            {
                c=ey%400;
                if(c==0)
                {day=day+1;}
                else
                {day=day;}
            }
            else
            {day=day+1;}
          }
          else
          {day=day;}
    }
    }
    else if(sy+1==ey)
    {
         for(i=sm;i<=12;i++)
    {
        if(i==2)
        {day=day+28;}
        else if((i==1)||(i==3)||(i==5)||(i==7)||(i==8)||(i==10)||(i==12))
        {day=day+31;}
        else if((i==4)||(i==6)||(i==9)||(i==11))
        {day=day+30;}
    }
    day=day-sd;
    if(em>1)
    {
    for(i=1;i<em;i++)
    {
        if(i==2)
        {day=day+28;}
        else if((i==1)||(i==3)||(i==5)||(i==7)||(i==8)||(i==10)||(i==12))
        {day=day+31;}
        else if((i=4)||(i==6)||(i==9)||(i==11))
        {day=day+30;}
    }
    }
    day=day+ed;
    if(sm<=2)
    {
      a=sy%4;
          if(a==0)
          {
            b=sy%100;
            if(b==0)
            {
                c=sy%400;
                if(c==0)
                {day=day+1;}
                else
                {day=day;}
            }
            else
            {day=day+1;}
          }
          else
          {day=day;}
    }
    if(em>2)
    {
        a=ey%4;
          if(a==0)
          {
            b=ey%100;
            if(b==0)
            {
                c=ey%400;
                if(c==0)
                {day=day+1;}
                else
                {day=day;}
            }
            else
            {day=day+1;}
          }
          else
          {day=day;}
    }
    }
    else if(sy==ey)
    {
        for(i=sm;i<em;i++)
    {
        if(i==2)
        {day=day+28;}
        else if((i==1)||(i==3)||(i==5)||(i==7)||(i==8)||(i==10)||(i==12))
        {day=day+31;}
        else if((i==4)||(i==6)||(i==9)||(i==11))
        {day=day+30;}
    }
    day=day-sd+ed;
    if((sm<=2)&&(em>2))
    {
      a=sy%4;
          if(a==0)
          {
            b=sy%100;
            if(b==0)
            {
                c=sy%400;
                if(c==0)
                {day=day+1;}
                else
                {day=day;}
            }
            else
            {day=day+1;}
          }
          else
          {day=day;}
    }
    }
    printf("%d",day);
    return 0;
}






