int main()
{
    int oy,om,od,ty,tm,td;
    cin>>oy>>om>>od>>ty>>tm>>td;
    int run[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    int ping[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int zong=0;
    int year,mon,day;
    if(oy==ty)
    {
              if(om!=tm)
              {
                                                   for(mon=om+1;mon<tm;mon++)
                                                   {
                                                                             if((oy%4==0&&oy%100!=0)||(oy%400==0))
                                                                             zong=zong+run[mon-1];
                                                                             else zong=zong+ping[mon-1];
                                                   }
                                                   if((oy%4==0&&oy%100!=0)||(oy%400==0))
                                                   zong=zong+run[om-1]-od+td;
                                                   else zong=zong+ping[om-1]-od+td;
              }
              else if(om==tm)
              zong=td-od;
    }
    else 
    {                                                                               
    for(year=oy+1;year<ty;year++)
    {
                        if((year%4==0&&year%100!=0)||(year%400==0))
                        zong=zong+366;
                        else zong=zong+365;
    }
    if((oy%4==0&&oy%100!=0)||(oy%400==0))
    {
                                         for(mon=om+1;mon<=12;mon++)
                                         {
                                                                   zong=zong+run[mon];
                                         }
                                         zong=zong+run[om]-od+1;
    }
    else 
    {
         for(mon=om+1;mon<=12;mon++)
         {
                                  zong=zong+ping[mon];
         }
         zong=zong+ping[om]-od+1;
    }
    if((ty%4==0&&ty%100!=0)||(ty%400==0))
    {
                                         for(mon=1;mon<tm;mon++)
                                         {
                                                                   zong=zong+run[mon];
                                         }
                                         zong=zong+td-1;
    }
    else 
    {
         for(mon=1;mon<tm;mon++)
         {
                                  zong=zong+ping[mon];
         }
         zong=zong+td-1;
    }
    }
    cout<<zong;
    return 0;
}