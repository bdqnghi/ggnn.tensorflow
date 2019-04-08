int main(){
int n,k;
int sz[1000];
int a,b,c=0;
scanf("%d %d",&n,&k);
for(int i=0;i<n;i++){
        scanf("%d",&sz[i]);
        }
for(int p=0;p<n;p++){
        for(int i=1;i<=n;i++){
                a=sz[p];
                b=sz[i];
                if(a+b==k){c+=1;
                }
                }
                }
if(c==0){printf("no");}
else printf("yes");
return 0;
    }
