unsigned findday(unsigned y,unsigned m,unsigned d)
{
 int leap,day;
 if((y%4==0&&y%100!=0)||(y%400==0)) leap=1;
 else leap=0;
 day=d;
 switch(m-1)
 {
  case 11:day+=30;
  case 10:day+=31;
  case  9:day+=30;
  case  8:day+=31;
  case  7:day+=31;
  case  6:day+=30;
  case  5:day+=31;
  case  4:day+=30;
  case  3:day+=31;
  case  2:
  if(leap==1) day+=29;
  else day+=28;
  case  1:day+=31;  
 }
 return day;
}

int main()
{
    unsigned y1,m1,d1,y2,m2,d2,i,p0,p1,c=0,p2,s; 
    scanf("%u %u %u",&y1,&m1,&d1);
    scanf("%u %u %u",&y2,&m2,&d2);
    if(y1==y2) s=findday(y2,m2,d2)-findday(y1,m1,d1);
    else
    {
    if(y1%4==0)
    p0=366-findday(y1,m1,d1);
    else
    p0=365-findday(y1,m1,d1); 

    
    for(i=y1+1;i<y2;i++)
    if((i%4==0&&i%100!=0)||(i%400==0))
    c+=1;
    p1=(y2-y1-1)*365+c;


    p2=findday(y2,m2,d2);
    s=p0+p1+p2;
    }    
    printf("%u",s); 
}