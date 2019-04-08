int main(){
    int m,n,l,z,a,b;
    a=0,b=0;
    scanf("%d",&l);
    for(int i=0;i<l;i++){
        scanf("%d %d",&m,&n);
  z=m-n;
  if(z==-1||z==2){b++;}
  else if(z==1||z==-2){a++;}
  
  
 
    }
   if(a>b){printf("B");}
else if(b>a){printf("A");}
else if(b==a){printf("Tie");}
   
   return 0;
   
}
    
