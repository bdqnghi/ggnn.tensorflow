int main()
{
    char a[200],b[200];
    gets(a);
    char *p,*q;
    for(p=a,q=b;(*p)!='\0';p++)
    {
       if((p-&a[0])==0)
       {
         *q=*p; 
         q++;
       }
       else
         if((*(p-1)==' ')&&((*p)==' '))
           continue;
         else
         {
           *q=*p;
           q++;
         }
         
    } 
    *q='\0';
    cout<<b<<endl;
    

    return 0;
}
            
       
    
