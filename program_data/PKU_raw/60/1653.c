int main()
{

int e,n,p,q;
e=0;
scanf("%d",&n);
for(int c=3;c<n-1;c++){
    p=0;
q=0;
        for(int i=2;i<c;i++){
                if(c%i==0){
                           p=1;}
                }
if(p==0){  for(int j=2;j<c+2;j++){
                if((c+2)%j==0){
                           q=1;}
        }
        }
if(p==0&&q==0){
        e=1; 
        printf("%d %d\n",c,c+2);
        }
        }


if(e==0){
          printf("empty");
          }
        int hou;
        scanf("%d",&hou);
return 0;
}
