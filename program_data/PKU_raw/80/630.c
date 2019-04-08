int main()
{
 int month[5][15];
 
 
 month[1][1]=31;
 month[1][2]=28;
 month[1][3]=31;
 month[1][4]=30;
 month[1][5]=31;
 month[1][6]=30;
 month[1][7]=31;
 month[1][8]=31;
 month[1][9]=30;
 month[1][10]=31;
 month[1][11]=30;
 month[1][12]=31;
 
 month[2][1]=31;
 month[2][2]=29;
 month[2][3]=31;
 month[2][4]=30;
 month[2][5]=31;
 month[2][6]=30;
 month[2][7]=31;
 month[2][8]=31;
 month[2][9]=30;
 month[2][10]=31;
 month[2][11]=30;
 month[2][12]=31;
 int top=0,s=0,a1,b1,c1,a2,b2,c2;
 cin>>a1>>b1>>c1>>a2>>b2>>c2;
if (a1!=a2)
 {
  while (a1<a2-1) 
  {
   if ((a1 % 4 == 0 && a1 % 100 != 0) || (a1 % 400 == 0)){s+=366;}
    else s+=365;
    a1++;
  }
  top=1;
  if ((a1 % 4 == 0 && a1 % 100 != 0) || (a1 % 400 == 0)){top=2;}
  
  if (b1!=12)
   {
   s+=month[top][b1]-c1+1;
   b1++;c1=1;
   }
  while (b1<13){s+=month[top][b1];b1++;}b1=1;c1=1;a1=a2;
 }
 
top=1;if ((a1 % 4 == 0 && a1 % 100 != 0) || (a1 % 400 == 0)){top=2;}
if (b1<b2)
 {
  s+=month[top][b1]-c1+1;b1++;c1=1;
  while (b1<b2){s+=month[top][b1];b1++;}
 }if (a2==2009 && b2!=1)s++;
s+=c2-c1;
cout<<s<<endl;
 return 0;
} 
