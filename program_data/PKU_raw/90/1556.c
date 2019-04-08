int main()
{   int fang(int x,int y);
    int i,t,m,n,f;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&m,&n);
        printf("%d\n",fang(m,n));
        } 
}
int fang(int x,int y)
{    
    if(x==1||y==1){ 
       return 1;}       
    if(x>y){
        return fang(x,y-1)+fang(x-y,y);
       }
    if(x<y){
        return fang(x,x);}
    if(x==y){
       return fang(x,y-1)+1;}            
    
}
       
    