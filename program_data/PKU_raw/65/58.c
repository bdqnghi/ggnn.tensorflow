

int main(int argc, char *argv[])
{
    int n,i;
    scanf("%d",&n);
    int a[200],b[200];
    int t=0,j=0;
    for(i=0;i<n;i++)
    {
                    scanf("%d%d", &a[i],&b[i]);
                    }
    for(i=0;i<n;i++)
    {
                    if(a[i]==0&&b[i]==1){
                                       t++;
                                       }
                    else if(a[i]==1&&b[i]==2){
                         t++;
                         }
                    else if(a[i]==2&&b[i]==0){
                         t++;
                         }
                    else if(a[i]==b[i]){
                         continue;
                         }
                    else{
                         j++;
                         }
    }
    if(t==j){
             printf("Tie");
             }
    else if(t>j){
         printf("A");
         }
    else if(t<j){
         printf("B");
         }
                        
   
    return EXIT_SUCCESS;
}