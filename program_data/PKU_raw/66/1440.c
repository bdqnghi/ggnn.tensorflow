int runnian(int a)
{
  int b;
  if ((a%4==0&&a%100!=0)||(a%400==0&&a%3200!=0))
   b=1;
  else
   b=0;
  return b;
}

int rizi(int y,int m,int d)
{
   int p,i,s=0;
   char n;
   int mm[13];
   mm[1]=31;
   mm[2]=28;
   mm[3]=31;
   mm[4]=30;
   mm[5]=31;
   mm[6]=30;
   mm[7]=31;
   mm[8]=31;
   mm[9]=30;
   mm[10]=31;
   mm[11]=30;
   mm[12]=31;
   p=runnian(y);
   if (m<=2)
       s=(m-1)*31+d;
   else
   {
       for (i=1;i<m;i++)
           s=s+mm[i];
       s=s+d;
       if (p==1)
           s++;
   }
   return s;
}

int main(){
    long int y1=1,y2,m1=1,m2,d1=1,d2;
    long int i;
    int s=0;
    int p;
    cin>> y2>>m2>>d2;
    y2=y2%400;
    if (y2==0)
      y2=400;
    s=rizi(y2,m2,d2)-rizi(y1,m1,d1);
    for(i=y1+1;i<=y2;i++)
    {
       s=s+365;
       p=runnian(i);
       if(i!=y2)
        if (p==1)
           s++;
       s=s%7;
    }
    switch (s)
    {
           case 0:cout<< "Mon." ;break;
           case 1:cout<< "Tue." ;break;
           case 2:cout<< "Wed.";break;
           case 3:cout<< "Thu." ;break;
           case 4:cout<< "Fri." ;break;
           case 5:cout<< "Sat." ;break;
           case 6:cout<< "Sun.";break;
           default:cout<<s;
    }
    cout<<endl;
    return 0;
}


