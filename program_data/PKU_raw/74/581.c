
int main (int argc, char *argv[])
{
  int n, m, i, j, x=0, y, s, t, c, k=0;
  scanf("%d %d",&m, &n);
  for(i=m;i<=n;i++){
          c=i;
          y=1;
          s=0;
          for(j=2;j<c;j++){ 
                  if(c%j==0){
                             y=0;
                             break;} 
          } 
          if(y==1){ 
                    while (c){ 
                       t=c%10;
                       s=s*10+t;
                       c=c/10;
                    }
                    if (i==s && k==0){ 
                           x=1;
                           k=1;
                           printf("%d",i);
                           continue;
                  }
                    if (i==s && k==1){ 
                           x=1;
                           printf(",%d",i);
                  }
          }
  }         
  if(x==0)printf("no");                         
  return 0;
}
