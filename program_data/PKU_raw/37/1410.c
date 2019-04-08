int main()
{
    int i,j,k,t,a[26],flag,len;
    char ch[100000];
    cin>>t;
    for(k=0;k<t;k++)
    {
         cin>>ch;
         flag=0;
         len=strlen(ch);
         for(i=0;i<26;i++)
         {
             a[i]=0;
          }
          for(i=0;i<len;i++)
         {
             j=ch[i]-'a';
              a[j]++;
          }
          for(i=0;i<26;i++)
           {
                 if(a[i]==1)
                 {
                     flag=1;
                   }
             }
           if(flag==0)cout<<"no"<<endl;
           else
            {
                 for(i=0;i<len;i++)
                {
                    j=ch[i]-'a';
                    if(a[j]==1){cout<<ch[i]<<endl;break;
}

                 }
            }
           
     }
return 0;
}


