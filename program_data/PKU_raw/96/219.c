int main()
{
   int i,len,remain,num,size=0;
   char N[101];
   cin>>N;
   len=strlen(N);
   remain=0;
   if(len==1)
	   cout<<0<<endl<<N<<endl;
   else if(len==2 && N[0]=='1' && N[1]<'3')
            cout<<0<<endl<<N<<endl;
   else
   {
       for(i=0;i<len;i++)
	   {
          num=remain*10+N[i]-'0';
	      if(num<13) 
		  {
		      remain=num;
	          N[i]=0+'0';
		  }
	      else 
		  {
	          N[i]=num/13+'0';
              remain=num%13;
		  }

	   }
       for(i=0;i<len;i++)
	   {
          if(N[i]!='0')
		  {
	         size=i;
		     break;
		  }
	   }
       for(i=size;i<len;i++)
       cout<<N[i];
       cout<<endl;
       cout<<remain<<endl;
   }
  return 0;
}
