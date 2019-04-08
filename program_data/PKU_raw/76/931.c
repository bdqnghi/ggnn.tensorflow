 int main(){
     int n;
     scanf("%d",&n);
     int i;
     struct qj{
       int a,b;       
     }*qjs,e;
     qjs=(struct qj*)malloc(sizeof(struct qj)*n);
     for(i=0;i<n;i++){
       scanf("%d%d",&qjs[i].a,&qjs[i].b);
     }
     int k,t;
     for(k=1;k<=n;k++){
       for(i=0;i<n-k;i++){
         if(qjs[i].a>qjs[i+1].a){
           e=qjs[i];
           qjs[i]=qjs[i+1];
           qjs[i+1]=e;
         }
         if(qjs[i].b>qjs[i+1].b){
           t=qjs[i].b;
           qjs[i].b=qjs[i+1].b;
           qjs[i+1].b=t;
         }                   
       }                 
     }

     int c=0;
     for(i=0;i<n-1;i++){
       if(qjs[i].b<qjs[i+1].a){
         c++;                        
       }                 
     }
     if(c==0){
       printf("%d %d",qjs[0].a,qjs[n-1].b);         
     }
     else{
       printf("no");     
     }
     free(qjs);
 return 0;
}

