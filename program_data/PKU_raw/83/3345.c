   int main(){
      int n,i,x; 
      float y,c,d,GPA;
      int a[num],b[num];
      x=0;
      c=0;
      d=0;
      scanf("%d",&n);
      for(i=0;i<n;i++){
         scanf("%d",&a[i]);
         x=x+a[i];
     }
     for(i=0;i<n;i++){
         scanf("%d",&b[i]);
     }
     for(i=0;i<n;i++){
       if(b[i]>=90){
         y=4.0;
       }else if(b[i]>=85){
         y=3.7;
       }else if(b[i]>=82){
         y=3.3;
       }else if(b[i]>=78){
         y=3.0;
       }else if(b[i]>=75){
         y=2.7;
       }else if(b[i]>=72){
         y=2.3;
       }else if(b[i]>=68){
         y=2.0;
       }else if(b[i]>=64){
         y=1.5;
       }else if(b[i]>=60){
         y=1.0;
       }else{
         y=0;
       }
       c=y*a[i];
       d=d+c;
     }  
     GPA=d/x;
     printf("%.2f",GPA);
     return 0;
}
       



        
        