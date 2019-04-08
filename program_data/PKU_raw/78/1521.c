int main()
{
   int s[4];                                            //s[4]????????s[0]s[1]s[2]s[3]???Z,Q,S,L??? 
   for(s[0]=10;s[0]<=50;s[0]=s[0]+10) 
   {
       for(s[1]=10;s[1]<=50;s[1]=s[1]+10) 
       {
                 for(s[2]=10;s[2]<=50;s[2]=s[2]+10) 
                  {
                              for(s[3]=10;s[3]<=50;s[3]=s[3]+10) 
                                    {
                                        if((s[0]+s[1]==s[2]+s[3])&&(s[0]+s[3]>s[2]+s[1])&&(s[0]+s[2]<s[1]))
                                        goto loop;
                                    }        
                  }                     
       }                               
   }
loop: {
      if(s[0]==50)
      cout<<"z "<<s[0]<<endl;
      if(s[1]==50)
      cout<<"q "<<s[1]<<endl;
      if(s[2]==50)
      cout<<"s "<<s[2]<<endl;
      if(s[3]==50)
      cout<<"l "<<s[3]<<endl;
      if(s[0]==40)
      cout<<"z "<<s[0]<<endl;
      if(s[1]==40)
      cout<<"q "<<s[1]<<endl;
      if(s[2]==40)
      cout<<"s "<<s[2]<<endl;
      if(s[3]==40)
      cout<<"l "<<s[3]<<endl;
      if(s[0]==30)
      cout<<"z "<<s[0]<<endl;
      if(s[1]==30)
      cout<<"q "<<s[1]<<endl;
      if(s[2]==30)
      cout<<"s "<<s[2]<<endl;
      if(s[3]==30)
      cout<<"l "<<s[3]<<endl;
      if(s[0]==20)
      cout<<"z "<<s[0]<<endl;
      if(s[1]==20)
      cout<<"q "<<s[1]<<endl;
      if(s[2]==20)
      cout<<"s "<<s[2]<<endl;
      if(s[3]==20)
      cout<<"l "<<s[3]<<endl;
      if(s[0]==10)
      cout<<"z "<<s[0]<<endl;
      if(s[1]==10)
      cout<<"q "<<s[1]<<endl;
      if(s[2]==10)
      cout<<"s "<<s[2]<<endl;
      if(s[3]==10)
      cout<<"l "<<s[3]<<endl;
      }
return 0;
}