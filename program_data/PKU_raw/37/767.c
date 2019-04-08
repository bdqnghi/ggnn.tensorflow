int main()
{char word[100100];
 int i=0,j,k,t,same=0,no=0;
 cin>>t;
 for(i=0;i<t;i++)
     {cin>>word;
      no=0;
      for(j=0;word[j]!='\0';j++)
          {same=0;
           for(k=0;word[k]!='\0';k++) if(word[j]==word[k]&&j!=k) {same=1;}   //???????????????? 
           if(same==0) {no=1;cout<<word[j]<<endl;break;}  
                                }
      if(no==0) cout<<"no"<<endl;   //?????? 
      
                 }

 return 0;
    } 
