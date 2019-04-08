int main()
{
   int y,m,d,a[12]={31,28,31,30,31,30,31,31,30,31,30,31},b[12]={0},i;
   cin>>y>>m>>d;
   if(y%4!=0||y%100==0&&y%400!=0)a[1]=28;
   else a[1]=29;
   for(i=1;i<12;i++)
   {
       b[0]=a[0];
       b[i]=b[i-1]+a[i];
   }
   if(m==1)cout<<d<<endl;
   else if(m!=1)cout<<b[m-2]+d<<endl;
   return 0;
}