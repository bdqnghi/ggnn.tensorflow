
int com(char sz_);
int com1(char sz_1);
int main()
{
    char sz[20][21];
    char sz_;
    char sz_1;
    int n,HH,JJ;
    scanf("%d",&n);
    for(HH=0;HH<n;HH++)
    {
        scanf("%s",sz[HH]);
    }

   
    for(HH=0;HH<n;HH++)
    {
      JJ=0;
     
      sz_=sz[HH][JJ];
      if(com(sz_)==0)
        {
            printf("no\n");
            continue;
        }
        for(JJ=1;sz[HH][JJ]!='\0';JJ++)
           {
            sz_1=sz[HH][JJ];
            if(com1(sz_1)==0)
                 {
                printf("no\n");
               break;

                  }
             }
  if(sz[HH][JJ]=='\0')
{        
            printf("yes\n");

}
    }

    
    
    
    
   return 0;         
}

int com(char sz_){
    int result;
    if(('a'<=sz_&&sz_<='z')||sz_=='_'||('A'<=sz_&&sz_<='Z'))
    {
        result=1;
    }
    else{
        result=0;
    }
    return result;
                   }
                   
int com1(char sz_1)
{
    int result1;
    if(('a'<=sz_1&&sz_1<='z')||sz_1=='_'||('A'<=sz_1&&sz_1<='Z')||('0'<=sz_1&&sz_1<='9'))

    {
        result1=1;
    }
    else{
        result1=0;
    }
    return result1;
}


