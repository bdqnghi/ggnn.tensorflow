int main()
{
   int a,i,d1,day=0;
   cin>>a;
   for(i=1;i<=12;i++)
	   {   if(((day+12)%7+a)%7==5) cout<<i<<endl;
		   if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) day+=31;
         else if(i==2) day+=28;
		 else day+=30;}
   return 0;
}
