
int main(int argc, char *argv[])
{
  int n,i,j,k,p,q=0,flag=0;
  char a[100000];
  int b[26];
  scanf("%d\n",&n);
  for(i=1;i<=n;i++)
  {
    
    
    gets(a);
  
    k=0;
    while(a[k]!='\0')
    {
      k++;     
    }
    for(j=0;j<k;j++)
    {
      for(p=0;p<k;p++)
      {
        if(a[p]==a[j])q++;                 
      }
      
      if(q==1)
      {
        printf("%c\n",a[j]);
        flag=1;
        break;        
      } 
     if(q>=2)
      {q=0;}               
    }
    
    if(flag==0)
    {
      printf("no\n");           
    }
    for(j=0;j<k;j++)a[j]='\0';
    flag=0;
k=0;q=0;
                   
  }

  return 0;
}
