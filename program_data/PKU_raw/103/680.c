int main()
{
    int n,i,j,k;
    char str[1000];
    
        scanf("%s",str);
        for(j=0;str[j];j++)
          {
            if(str[j]<='z'&&str[j]>='a')
              str[j]=str[j]-32;               
          }
        for(i=0,n=1;str[i]!='\0';i++)
          {
            if(str[i]==str[i+1])
              { 
                n=n+1;
              }                 
            
            else
              {
                printf("(%c,%d)",str[i],n);
                n=1;
              }   
          }  
}             