int main()
{
int n,e;
e=0;
int a[20000];
scanf("%d",&n);
for(int i=0;i<n;i++){
     scanf("%d",&a[i]);
        }
for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(a[i]==a[j]){
        a[j]=0;
                }
                }
                     }
for(int i=0;i<n;i++){
           if(e==0&&a[i]!=0){
           printf("%d",a[i]);
           e=1;
           }
           else if(e==1&&a[i]!=0){
                 printf(" %d",a[i]);
                             }
           
        }     
              
           
   
int hou;
scanf("%d",&hou);
return 0;
}
