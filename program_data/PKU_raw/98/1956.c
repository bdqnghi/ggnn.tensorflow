
int main(int argc, char *argv[])
{
    int n,i,sum1=0,len1,len2,count=0;
    char a[500][40];
    scanf("%d",&n);
    for(i=0;i<n;i++){   //?? 
                     scanf("%s",a[i]);
                     }
    int sum2=strlen(a[0]);
    
    for(i=0;i<n-1;i++){
                     len1=strlen(a[i]);
                     len2=strlen(a[i+1]);
                     sum1+=len1;
                     sum2+=len2;
                     
                     if(sum2+count+1<=80) {printf("%s ",a[i]);count++;}
                     else if(sum2+count+1>80 && sum1+count<=80)  {
                          printf("%s\n",a[i]);
                          count=sum1=0;
                          sum2=strlen(a[i+1]);
                          }
                     else {
                          printf("\n");
                          count=sum1=0;i--; 
                          sum2=strlen(a[i]);
                          
                          }
                          }
                          
                          
    printf("%s\n",a[n-1]);
    
    

  return 0;
}

