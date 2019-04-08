int main()
{
    int i,n,shousuoya,shuzhangya,hour=0,c=0;
    cin >> n;
    
  for(i=1;i<=n;i++)
 {
   cin >> shousuoya >> shuzhangya;
   if(shousuoya>=90 && shousuoya<=140 && shuzhangya>=60 && shuzhangya<=90)
   {
    hour+=1;
   }
   else
   {
    if(hour>=c)
    { 
      c=hour;
      hour=0;
    }
    else
   {
     hour=0;
    }
   }
 }
if(hour>=c)
 {
   c=hour;
 }
 cout << c << endl;
return 0;
}