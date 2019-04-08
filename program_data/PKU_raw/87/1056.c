int main()
{
  int a,b,c,d,e,f,s,m,n,all;  
  for(int i=1;i<100;i++){
    scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f);
    if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
      break;
    }else{
    d=d+12;
    n=d*60*60+e*60+f;
    m=a*60*60+b*60+c;
    s=n-m;
    printf("%d\n",s);}
  }
return 0;
}
