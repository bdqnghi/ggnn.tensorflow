/*
 * 5.cpp
 *
 *  Created on: 2011-11-4
 *      Author: 11132
 */

int main()
{
   int y1,m1,d1,y2,m2,d2,t1,t2,n,i,p=0;
   cin>>y1>>m1>>d1;
   cin>>y2>>m2>>d2;

   if((y1%4==0)&&(y1%100!=0)||(y1%400==0))
   {switch(m1)
   {
   case 1:t1=d1;break;
   case 2:t1=31+d1;break;
   case 3:t1=59+d1+1;break;
   case 4:t1=90+d1+1;break;
   case 5:t1=120+d1+1;break;
   case 6:t1=151+d1+1;break;
   case 7:t1=181+d1+1;break;
   case 8:t1=212+d1+1;break;
   case 9:t1=243+d1+1;break;
   case 10:t1=273+d1+1;break;
   case 11:t1=304+d1+1;break;
   case 12:t1=334+d1+1;break;
   }
   t1=366-t1;}
   else
   {switch(m1)
   {
   case 1:t1=d1;break;
   case 2:t1=31+d1;break;
   case 3:t1=59+d1;break;
   case 4:t1=90+d1;break;
   case 5:t1=120+d1;break;
   case 6:t1=151+d1;break;
   case 7:t1=181+d1;break;
   case 8:t1=212+d1;break;
   case 9:t1=243+d1;break;
   case 10:t1=273+d1;break;
   case 11:t1=304+d1;break;
   case 12:t1=334+d1;break;
   }
   t1=365-t1;}

   if((y2%4==0)&&(y2%100!=0)||(y2%400==0))
   {switch(m2)
   {
   case 1:t2=d1;break;
   case 2:t2=31+d2;break;
   case 3:t2=59+d2+1;break;
   case 4:t2=90+d2+1;break;
   case 5:t2=120+d2+1;break;
   case 6:t2=151+d2+1;break;
   case 7:t2=181+d2+1;break;
   case 8:t2=212+d2+1;break;
   case 9:t2=243+d2+1;break;
   case 10:t2=273+d2+1;break;
   case 11:t2=304+d2+1;break;
   case 12:t2=334+d2+1;break;
   }}
   else
   {switch(m2)
   {
   case 1:t2=d2;break;
   case 2:t2=31+d2;break;
   case 3:t2=59+d2;break;
   case 4:t2=90+d2;break;
   case 5:t2=120+d2;break;
   case 6:t2=151+d2;break;
   case 7:t2=181+d2;break;
   case 8:t2=212+d2;break;
   case 9:t2=243+d2;break;
   case 10:t2=273+d2;break;
   case 11:t2=304+d2;break;
   case 12:t2=334+d2;break;
   }}
   if(y1==y2) p=0;
   else if(y1+1==y2) p=0;
   else
   {for(i=y1+1;i<y2;i++)
   {
	   if((i%4==0)&&(i%100!=0)||(i%400==0))
	   {
		   p=p+1;
	   }
   }}
   n=t1+t2+365*(y2-y1-1)+p;
   cout<<n<<endl;
   return 0;
}
