int main()
{
int i,j,e,n,a[10000],b[10000];
scanf("%d",&n);
e=0;
i=1;
j=1;
for(int k=0;k<n;k++){
        a[k]=0;
        b[k]=0;
        }


while(i!=0||j!=0){
        scanf("%d %d",&i,&j);
        a[i]++;
        b[j]++;
        }
        a[0]--;
        b[0]--;
for(int k=0;k<n;k++){
    if(a[k]==0&&b[k]==n-1){
                       e=1;
                       printf("%d",k);
                       }    
        }
    if(e==0){
             printf("NOT FOUND");
             }




return 0;
}
