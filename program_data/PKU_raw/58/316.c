
int main()
{
   int n;
   cin>>n;
   char s[1001];int i=0;
   while(cin.getline(s,1001))
   {   int ok=0;
      i++;


       if((s[0]>='a')&&(s[0]<='z')) ok=1;
	   else if((s[0]>='A')&&(s[0]<='Z'))ok=1;
	   else if(s[0]=='_')  ok=1;

	   if(ok)//????
		   {
	   for(int j=1;s[j];j++)
	   {
		   if((s[j]>='a')&&(s[j]<='z'))  ok=1;
		   else if((s[j]>='A')&&(s[j]<='Z')) ok=1;
		   else if((s[j]>='0')&&(s[j]<='9'))  ok=1;
		   else if(s[j]=='_')  ok=1;
		   else {
			   ok=0;break;//?????????????

		   }
        }
	   }
	   if(i!=1)
	   cout<<ok<<endl;//????????????????????

   }
  return 0;//?????
}
