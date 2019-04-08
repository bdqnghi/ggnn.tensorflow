int main()
{
	char a[1000] , judge;
	int num=0;
	while (cin.getline(a , 1000 , '\n'))
	{
	  num=0;
	  int len;
	  len=strlen(a);
	  if (a[0]>=65 && a[0]<=90)
	      judge=a[0];
	  else judge=(char)(a[0]-32);
	  if (len==1) cout<<"("<<judge<<",1)";
	  else 
	  {
	  for (int i=0;i<len;i++)
	  {
	   if ((a[i]==judge || a[i]==(char)(judge+32)) && i!=len-1)
		   num=num+1;
	   else 
	   {
		   if (a[i]!=judge && i!=len-1)
		   {
	         if (a[i-1]>=65 && a[i-1]<=90)
		        cout<<"("<<a[i-1]<<","<<num<<")";
		     else cout<<"("<<(char)(a[i-1]-32)<<","<<num<<")";
		     num=1;
		     if (a[i]>=65 && a[i]<=90)
	           judge=a[i];
	         else judge=(char)(a[i]-32);
		   }
		   else if (a[i]==judge && i==len-1)
		   {
		      if (a[i]>=65 && a[i]<=90)
		        cout<<"("<<a[i]<<","<<num+1<<")";
		     else cout<<"("<<(char)(a[i]-32)<<","<<num+1<<")";
		   }
		   else 
		   {
		      if (a[i-1]>=65 && a[i-1]<=90)
		        cout<<"("<<a[i-1]<<","<<num<<")";
		     else cout<<"("<<(char)(a[i-1]-32)<<","<<num<<")";
			 if (a[i]>=65 && a[i]<=90)
		        cout<<"("<<a[i]<<",1)";
		     else cout<<"("<<(char)(a[i]-32)<<",1)";
		   }
	   }
	  }
	  }
	  cout<<endl;
	}
	return 0;
}

