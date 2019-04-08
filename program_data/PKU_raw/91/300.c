int main()
{
   char a[1000];
   cin.getline(a,1000,'\n');
   int c=strlen(a);
 
   char b[1000];
   char *p=a,*q=b;
   for(p=a;p<=a+c-2;q++,p++)
   *q=(char)((int)(*p)+(int)(*(p+1)));
   *q=(char)((int)(*p)+(int)(*(p-c+1)));
   for(q=b;q<b+c;q++)
     cout<<*q;

 return 0;
 }
