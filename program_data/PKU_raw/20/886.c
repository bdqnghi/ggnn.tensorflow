int main()
{
    char str[20],substr[4];
    char c;
    memset(str,0,sizeof(str));
   while(cin.getline(str,15,' '))
    {
          cin.getline(substr,4);
          
    char *p,*max=str;
    
    for(p=str;*p!=0;)
    {
                    if(*p>*max) max=p;
                    p++;
    }
    p=str;
    do
    {
                    cout<<*p;
                    if(p==max) cout<<substr;
                    p++;
    }while(*p!=0);
    
    cout<<endl;
    
   
    if(c==0) break;
    else c=str[0];
     memset(str,0,sizeof(str));
    }
    return 0;
    
} 
