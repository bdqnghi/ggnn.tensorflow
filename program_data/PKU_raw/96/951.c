int main()
{
   char c[110]={'\0'},s[110]={'\0'},p;
   int y=0,i,j,b;
   cin>>c;
   int z=(c[0]-'0')*10+c[0+1]-'0';
   if(strlen(c)<2)
      cout<<'0'<<endl<<c<<endl;
   else if(strlen(c)==2)
   {
      cout<<atoi(c)/13<<endl<<atoi(c)%13<<endl;     
   } 
   else
   {
       for(i=0;i<strlen(c)-2;i++)
       {
          b=(c[i]-'0')*10+c[i+1]-'0';//??????13 
          if(b>=13)
          {
             s[i]='0'+b/13; 
             c[i+1]='0'+b%13;                                
          }
          else//??13 
          {
             b=(c[i]-'0')*100+(c[i+1]-'0')*10+(c[i+2]-'0');
             s[i+1]='0'+b/13;
             c[i+1]='0'+b%13/10;
             c[i+2]='0'+b%13%10;    
          }                       
       }
       y=c[strlen(c)-1]-'0'; 
       int r;
       if(z>=13)r=strlen(c)-1;
       else r=strlen(c)-2;//???? 
       for(i=0;i<100;i++)
          if(s[i]!='\0')
          {
             
             for(int k=i+1;k<r;k++)
                if(s[k]=='\0')
                   s[k]='0';
             break;
          }
          for(i=0;i<100;i++)
             for(j=0;j<100;j++)
                if(s[j]=='\0')
                {
                   p=s[j];
                   s[j]=s[j+1];
                   s[j+1]=p;              
                }
          for(i=0;i<r;i++)cout<<s[i];
       cout<<endl<<y<<endl;
   }
   return 0;
}
