int main ()
{
   char a[50],b[50];
   int i,k,flag=0;
   cin >> a>> b;
   for(i=0;b[i]!='\0';i++)
   {
	    if(a[0]==b[i])
		{
		   for(k=1;a[k]!='\0';k++)
			   if(a[k]!=b[i+k])
			   {
				   flag=1;
				   break;
				}
			if(flag==0)
			{
				cout << i<<endl;break;
			}
		 }
   }
   return 0;
}


