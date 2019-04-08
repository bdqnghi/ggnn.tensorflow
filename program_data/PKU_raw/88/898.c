int main()
{ 
    char str[300];
    cin.get(str,300);
    char *p=str;
    int l;
    l=strlen(str);
    int i;
    int q=0;
    for(i=0;i<l;i++,p++)
    {
       if((*p>=48)&&(*p<=57))
        {
           if((*(p+1)>=48)&&(*(p+1)<=57))
               cout<<*p;
            if((*(p+1)<48)||(*(p+1)>57))
               cout<<*p<<endl;                
        }                                             
    }
    
    
      
    return 0;                 
    
}
