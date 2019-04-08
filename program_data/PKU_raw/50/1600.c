
int main(int argc, char *argv[])
{ int tianshu[13]={0,31,59,90,120,151,181,212,243,273,304,334,365};
  int i,n,m,xinqi;
  scanf("%d",&xinqi);
  for(i=0;i<12;i++){
       if((tianshu[i]+12+xinqi)%7==5)
          printf("%d\n",i+1);             }
  
    
  
  return 0;
}
 
