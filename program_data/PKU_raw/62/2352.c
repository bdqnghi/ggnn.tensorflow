int main()
{   char a[1000];                                //?????????? 
    int i;
    char b;
    int j=0;
    int c=0;
    while(1)
       {   b=cin.get();
           if(b=='\n')  break;                   // ???? 
           if(b!=32)                            //  ????  ?? 
             {   a[j]=b;
                 j=j+1;
                 if(b!=46)  c=0;
                 else       c=1;
             }
           else                      
             {   c=c+1;
                 if(c>1) continue;           //???1?????? 
                 else   
                   {   a[j]=b;                //????????? 
                       j=j+1;
                   }
             }
       } 
    for(i=0;i<j;i++)   cout<<a[i];
    return 0;
}