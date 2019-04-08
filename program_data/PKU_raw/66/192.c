int main()
{
    int y, m, d;
    int i, j, n, k, e;
    m = n = 0;
    cin>>y;
    cin>>m;
    cin>>d;
    e = y%400;
    if(e!=0)
    {
             for(i=1;i<e;i++)
             {
                 if(i%400==0)
                 {
                     n = n + 2;
                 }
                 else if(i%100==0)
                 {
                     n = n + 1;
                 }
                 else if(i%4==0)
                 {
                     n = n + 2;
                 }
                 else
                 {
                     n = n + 1;
                 }
             }
    }
    else
    {
        for(i=1;i<400;i++)
        {
            if(i%400==0)
            {
                n = n + 2;
            }
            else if(i%100==0)
            {
                n = n + 1;
            }
            else if(i%4==0)
            {
                n = n + 2;
            }
            else
            {
                n = n + 1;
            }
        }
    }
     for(j=1;j<m;j++)
 {
  switch(j)
  {
   case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12: n = n + 3;break;
   case 2:
  if(i%400==0)
  {
   n = n + 1;
  }
  else if(i%100==0)
  {
   n = n;
  }
  else if(i%4==0)
  {
   n = n + 1;
  }
  break;
  default: n = n + 2;break;
  }
}
 n = n + d;
 k = n%7;
 if(k==1)
 {
 cout<<"Mon."<<endl;
 }
  if(k==2)
 {
 cout<<"Tue."<<endl;
 }
  if(k==3)
 {
 cout<<"Wed."<<endl;
 }
  if(k==4)
 {
 cout<<"Thu."<<endl;
 }
  if(k==5)
 {
 cout<<"Fri."<<endl;
 }
  if(k==6)
 {
 cout<<"Sat."<<endl;
 }
  if(k==0)
 {
 cout<<"Sun."<<endl;
 }
 return 0;
}