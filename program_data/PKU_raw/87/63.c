int main(){
    int a,b,c,d,e,f,i,k,s[100],m,n;
    for(i=0;1;i++){
        scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
        if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0) break; 
        m=a*3600+b*60+c;
        n=d*3600+e*60+f+43200;
        printf("%d\n",n-m);      
        }
  
    
    scanf("%d",&i);
    return 0;
    } 
