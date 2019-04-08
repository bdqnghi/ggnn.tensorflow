
int main()
{
    int i,a,n,num=1;
    char str[1001];
    scanf("%s",str);
    n=strlen(str);

    
    for (    i=0  ;i<=(n-1)   ;i++   )
    {
            if   (  str[i]>=97  )
            str[i]=str[i]-32;
    }
    
    
    for (    i=0  ;i<=(n-1)   ;i++   )
    {
            if (     str[i]==str[i+1]  )
            num++;
            else
            {
            printf("(%c,%d)",str[i],num);
            num=1;
            }
            
    }  
    
    
  
    
    
}
