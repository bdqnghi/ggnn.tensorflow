int main()
{
 int n,i,counter,len,j;
 char c[81];
 cin>>n;
 cin.get();
 for(i=1;i<=n;i++)
 { 
   counter=0;
   cin.getline(c,81);
   len=strlen(c);
   if(len>1)
   {
	if(c[0]=='_'||(c[0]>64&&c[0]<91)||(c[0]>96&&c[0]<123))
    {
      for(j=1;c[j]!=0;j++)
	  {
	   if(c[j]=='_'||(c[j]>64&&c[j]<91)||(c[j]>96&&c[j]<123)||(c[j]>='0')&&(c[j]<='9'))
		   counter++;
      }
	  if(counter==len-1)
        cout<<"1"<<endl;
	  else
        cout<<"0"<<endl;
    }
	else
	    cout<<"0"<<endl;
   }
   else
   {
     if(c[0]=='_'||(c[0]>64&&c[0]<91)||(c[0]>96&&c[0]<123))
       cout<<"1"<<endl;
     else
	    cout<<"0"<<endl;
   }
	   
 }
 return 0;
}