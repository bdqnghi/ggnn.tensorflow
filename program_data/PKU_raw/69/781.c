int  main()
{
  
   char a[253],b[253];
   int a1[252],b1[252],c[252];
   memset(a1,0,sizeof(a1));
   memset(b1,0,sizeof(b1));
   memset(c,0,sizeof(c));
   cin.getline(a,253);
   cin.getline(b,253);
   int length1=strlen(a),length2=strlen(b);
  if(strcmp(a,"0")==0&&strcmp(b,"0")==0)
	  cout<<'0'<<endl;
  else
{   int i,j=0;
   i=length1-1;
   for(int temp=i;temp>=0;temp--)
	   a1[j++]=a[temp]-'0';
   i=length2-1;  j=0;
   for(int temp=i;temp>=0;temp--)
	   b1[j++]=b[temp]-'0';
  /* for(i=0;i<252;i++)
	{   c[i]=a1[i]+b1[i];
      if(c[i]>=10)  
       {
	      c[i]-=10;
	      c[i+1]++;
       }
   }*/
   for(i=0;i<252;i++)
   {
     a1[i]+=b1[i];
     if(a1[i]>=10)
	 {
	   a1[i]-=10;
	   a1[i+1]++;
	 }
   }
   i=251;
   while(a1[i]==0)  i--;
   for(;i>=0;i--)
	   cout<<a1[i];
   cout<<endl;
  }

   return 0;
}