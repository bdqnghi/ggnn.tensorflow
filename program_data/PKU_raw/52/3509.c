//*******************//
//*???????   *//
//*?????       *//
//*???2010.12.10 *//
//*******************//
int main()
{
 int a[100];
 int n,m,i,counter=0;
 cin>>n>>m;
 for(i=0;i<n;i++)
 {
   cin>>a[i];
 }
 int *p;
 for(p=a+n-m;;p++)
 {
   if(p!=a+n-1)
   {
	   if(counter!=n-1)
	     cout<<*p<<" ";
	   else
         cout<<*p;
   }
   else
   {
	   cout<<*p<<" ";
	   p=a-1;
   }
   counter++;
   if(counter==n)
	   break;
 }
 return 0;
}