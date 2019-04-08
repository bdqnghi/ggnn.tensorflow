
int main()
{
    int i,j,k,n;
    char a[11];
    int b;    
    scanf("%d",&n); 
    struct patient
    {
           char num[11];
           int age; 
           }pat[100];                  
    for(i=0;i<n;i++){                     
                     scanf("%s%d",pat[i].num,&pat[i].age);             
                     }                     
    for(i=0;i<n;i++){
                       for(j=0;j<n-1-i;j++){
                                            if(pat[j].age<pat[j+1].age&&pat[j+1].age>=60){
                                                                        for(k=0;k<10;k++){
                                                                                          a[k]=pat[j].num[k];
                                                                                          pat[j].num[k]=pat[j+1].num[k];
                                                                                          pat[j+1].num[k]=a[k];
                                                                                          }
                                                                        
                                                                        b=pat[j].age;
                                                                        pat[j].age=pat[j+1].age;
                                                                        pat[j+1].age=b;
                                                                        }
                                            }
                       }
    for(i=0;i<n;i++){
                       printf("%s\n",pat[i].num);
                       }      
    
    
    return 0;
    }