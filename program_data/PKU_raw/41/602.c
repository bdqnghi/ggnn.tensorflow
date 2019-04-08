int main()
{
    int word[6]={0},a=0,b=0,c=0,d=0,e=0;//abcde????abcde????word??abcde???????  
    for(a=1;a<=5;a++)
    {
         for(b=1;b<=5;b++)   
         {
              if(b==a)
              continue;
                  for(c=1;c<=5;c++)
                  {
                      if(c==b)
                      continue;
                          for(d=1;d<=5;d++)
                          {
                              if(d==c)
                              continue;
                                  for(e=1;e<=5;e++)
                                  {
                                  if(e==d)
                                  continue;
                                  word[a]=(e==1);
                                  word[b]=(b==2);  
                                  word[c]=(a==5); 
                                  word[d]=(c!=1); 
                                  word[e]=(d==1);  
                                  if((word[1]==1)&&(word[2]==1)&&(word[3]==0)&&(word[4]==0)&&(word[5]==0)&&(e!=2)&&(e!=3))  
                                  {cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;goto loop;}  
                                  }     
                          }                 
                  }               
         }              
    }
loop:  return 0;
}
