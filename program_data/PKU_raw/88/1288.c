int main()
{
   char a[40];
   char *p=a;
   cin.get(a,40);
   for(;*p!='\0';p++)
   {
	  if(*p>='0'&&*p<='9')
	  {
		  for(;*p>='0'&&*p<='9';p++)
			  cout<<*p;
		  cout<<endl;
	  }
   }
   return 0;
}