

int main()
{ 
   char str[100],temp[100];                   //?????? 
   char *p=str,*q=temp;       //?????????????????a
   int i=0,j=0,flag;                            //??????N
   cin.getline(p,100);
   while(1)
   {
          
          if(*p<=57&&*p>=48)
          {*q=*p;q++;flag=1;}          
          else if(flag==1)
          { *q=0;
               q=temp;
               cout<<q<<endl;
               flag=0;
          }
          if(*p==0)
          break;          
        p++;
   }
     
 
    return 0;
}