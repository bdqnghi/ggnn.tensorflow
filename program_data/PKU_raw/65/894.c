int main(){
    int n,i,a=0,b=0,c=0,m,p,r;
    
    scanf("%d",&n);
  
    
    for(i=0;i<n;i++){
       scanf("%d%d",&m,&p);
        r=m-p;
        if(r==1||r==-2) b++;
        else if(r==0) c++;
        else if(r==-1||r==2) a++;
    }
     if(a>b) printf("A");
     if(a<b) printf("B");
     if(a==b) printf("Tie");
     return 0;
}


