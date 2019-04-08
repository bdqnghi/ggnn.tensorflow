int main()
{
   int a,b,c;
  for(a=0;a<=2;a++)
   for(b=0;b<=2;b++)
    {
      if(a==b)
      continue;
    }
     for(c=0;c<=2;c++)
      {
        if(a==b&&b==c)
         continue;
        else
         
         cout<<"BCA"<<endl;
         break;
       }
 return 0;
}