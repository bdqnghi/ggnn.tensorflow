int main()
{
    void ff(char str[],int x);
    int i,k,fff;
    char str[1000];
    for(fff=1;fff<=6;fff++)
{
      cin.getline(str,100,'\n');
      k=strlen(str);
      
      int v=0;
      
      for(i=k-1;i>=0;i--)
           if(str[i]=='0') v++;
           
           else break;
       
       
      if(v==k)
         cout<<0;
      else if(v==k-1&&str[0]=='-')
             cout<<0<<endl;
      else
      {
          for(i=k-1;i>=1;i--)
              if(str[i]=='0'&&str[i-1]=='0')
              {str[i]=0,str[i-1]=0;i--;}
          else if(str[i]=='0'&&str[i-1]!='0')
                {str[i]=0;break;} 
          else break;
          
          
          k=strlen(str);
          str[k]='a';
          str[k+1]=0;
     

          if(str[0]!='-')
              ff(str,0);
          else
          {
              cout<<"-";
              for(i=0;i<=k-2;i++)
                 str[i]=str[i+1];
              str[k-1]='a';
              str[k+1]=0;
              ff(str,0); 
          }
          cout << endl;
      }
}
 
  return 0;
}
  void ff(char str[],int x)
{
    
    if(str[x]!='a')
      {
      x++;
      ff(str,x);
      x--;
      }
    if (str[x]!='a') 
        cout<<str[x];
}
