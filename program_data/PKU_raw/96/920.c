int f(char a)                                       //?????????????? 
{  if(a=='1')  return 1;
   if(a=='2')  return 2;
   if(a=='3')  return 3;
   if(a=='4')  return 4;
   if(a=='5')  return 5;
   if(a=='6')  return 6;
   if(a=='7')  return 7;
   if(a=='8')  return 8;
   if(a=='9')  return 9;
   if(a=='0')  return 0;
}
int main()
{   char a;
    int b;
    int chushu=0;
    int yushu=0;
    int shang;
    int t=0;
    int v=0;
    while(1)                                    
      {                   
                 cin.get(a);                   
                 if(a=='\n')                    //?????? 
                    {   t=1;
                        
                    }
                 b=f(a);                       
                 chushu=10*chushu+b;          //????? 
            
         if(t==1)  break;                     //???? 
         shang=chushu/13;                    //???? 
         yushu=chushu%13;
         chushu=yushu;
         if(shang!=0)   v=v+1; 
         if(v!=0)   cout<<shang;                         //?? 
         
      }
    if(v==0)   cout<<0;
    cout<<endl;
    cout<<yushu;
    return 0;
}