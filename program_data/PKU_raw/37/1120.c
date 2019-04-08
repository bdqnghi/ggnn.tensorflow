void sword(void);
int main(void)
{
    int love;
    scanf("%d\n",&love);
    
    int t;
    for(t=0;t<love;t++){
                        sword();
                        }
                        return 0;
                        
}     


void sword(void)
{                   
    char fib[10000];
    gets(fib);
    
    char haha='a';
    
    int length;
    length=strlen(fib);
    
    int counter[26];
    int loc[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    int i;
    char j;
    
    
    for(j=0;j<26;j++){
                      counter[j]=0;
    for(i=0;i<length;i++)
                    {
                    if(fib[i]==97+j)
                    {
                    if(loc[j]==0){
                    loc[j]=i+1;(counter[j])++;}
                    else
                    (counter[j])++;}
                    }}
                    
    int min=length;
    for(j=0;j<26;j++){
                      if(loc[j]<min && loc[j]!=0 && counter[j]==1)
                      min=loc[j];}
                      
                      
    int miao=0;
    for(j=0;j<26;j++){
                      if(counter[j]==1 && loc[j]==min){
                      printf("%c\n",haha+j);miao++;}
                      
                      
                      
                      }
    
    if(miao==0)
    printf("no\n");   
   


}
   
    
    
 
    
