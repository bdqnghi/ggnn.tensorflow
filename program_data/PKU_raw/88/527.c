int main()
{
   char a[31];
   cin.getline(a,31,'\n');
   int b=strlen(a);
   char c[31];
   char *p=a;
   char *q=c;
   for(;p<a+b;q++,p++)
    {
       if(*p-'0'>=0&&*p-'0'<=9)
         *q=*p;
       else
         *q='\n';
     }
   for(q=c;q<c+b;q++)
     cout<<*q;
      
     
     
   
   
   
   
 
 return 0;
 }
