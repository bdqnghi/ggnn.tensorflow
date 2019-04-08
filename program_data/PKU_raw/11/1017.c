int main()
{
   int y,m,d,i,number=0;
   cin>>y>>m>>d;
   int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
  if(y%4==0&&y%100!=0||y%400==0)
   {
      for(i=1;i<=m-1;i++)
        number=number+b[i-1];
      number=number+d;
}
else
{
      for(i=1;i<=m-1;i++)
        number=number+a[i-1];
      number=number+d;
}
cout<<number<<endl;
return 0;
}