int main(){
    int a,b,c,d,e,f,s1,s2,s3,s,x=0;
    int i; 
    
    for(i=0;x!=1;i++){
      scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f); 
      if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
       x=1;
      return 0;      
      }else{                          
      s=0;
      d=d+12;
      if(f>=c){
        s3=f-c;
      }else{
        s3=60+f-c;
        e--;
      }
      if(e>=b){
        s2=(e-b)*60;  
      }else{
        s2=(60+e-b)*60;
        d--;
      }
      s1=(d-a)*3600; 
      s=s1+s2+s3;
      printf("%d\n",s);
      }
       
}


    return 0;
}
