int main(){
    int n,i,a=0,b=0,c,d;
    scanf("%d",&n);
    for(i=0;i<n;i++){
          scanf("%d%d",&c,&d);
          if(c-d==1)b++;
          else if(d-c==1)a++;
          else if(d<c)a++;
          else if(d>c)b++;
    }
    if(a<b)printf("B");
    else if(a>b)printf("A");
    else printf("Tie");
    return 0;
}