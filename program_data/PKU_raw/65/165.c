 int main(){
     int n,c=0,d=0,a,b,e=0;
     scanf("%d",&n);
     for(int i=0;i<n;i++){
         scanf("%d%d",&a,&b);
        if(a-b==-1){
            c++;
        }
        else if(a-b==2){
            c++;
        }
        else if(a-b==1){
            d++;
        }
        else if(a-b==-2){
            d++;
        }
         }
     if(c>d){
         printf("A");
     }
     else if(c<d){
         printf("B");
     }
     else {printf("Tie");}
     return 0;
 }
 
