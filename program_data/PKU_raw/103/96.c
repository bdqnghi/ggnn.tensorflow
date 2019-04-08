//?? - ????
 

int main()
{
    char a[1101];
    int n;
    int count=0;
    char b;
    int i,j;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
                    if(a[i]>='a'&&a[i]<='z')
                    a[i]=a[i]-'a'+'A';
    }
    
          b=a[0];
          count++;
          if(n==1)printf("(%c,%d)",b,count);
          else 
          for(j=1;j<n;j++)
          {
                          if(a[j]==b)
                          {
                          count++;
                          if(j==n-1)
                          printf("(%c,%d)",a[j],count);}
                          else
                          {
                              
                              printf("(%c,%d)",a[j-1],count);
                              count=1;
                              b=a[j];
                              if(j==n-1)
                              printf("(%c,%d)",a[j],count);
                              
                          }          
     }
     getchar();
     getchar();

     


return 0;
}
