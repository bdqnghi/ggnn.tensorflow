


int  main()
{
     char str1[405],str2[405];
     cin>>str1>>str2; 
     int x=strlen(str1),y=strlen(str2);
     int maxlen=x>y?x:y;
     int ans1[405],ans2[405],i,j=0;
     memset(ans1,0,sizeof(ans1));
     memset(ans2,0,sizeof(ans2));
     for (i=x-1;i>=0;i--)
     ans1[j++]=str1[i]-'0';
     j=0;
     for (i=y-1;i>=0;i--)
     ans2[j++]=str2[i]-'0';
     for (i=0;i<maxlen;i++)
     {
         ans1[i]+=ans2[i];
         if (ans1[i]>=10){
         ans1[i]-=10;
         ans1[i+1]++;}
     }
     i=maxlen;
     while(ans1[i]==0) i--;
     if (i<0)
     cout<<0;
     else{
     for (;i>=0;i--)
     cout<<ans1[i];
     }
     return 0;
}