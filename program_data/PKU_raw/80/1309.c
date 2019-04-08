int main()
{
  int sY,sM,sD,eY,eM,eD,sN,eN,N,num(int Y,int M,int D);
  scanf("%d%d%d\n%d%d%d",&sY,&sM,&sD,&eY,&eM,&eD);
  sN=num(sY,sM,sD);
  eN=num(eY,eM,eD);
  N=eN-sN;
  printf("%d",N);
  return 0;
}

int num(int Y,int M,int D)
{
  int N,a,M1,Y1;
  M1=M-1;
  Y1=Y-1;
  if(M1==1||M1==5||M1==6)
    a=1;
  else if(M1==2)
    a=-1;
  else if(M1==3||M1==4||M1==0)
    a=0;
  else if(M1==7)
    a=2;
  else if(M1==8||M1==9)
    a=3;
  else if(M1==10||M1==11)
    a=4;
  N=365*Y1+Y1/4-Y1/100+Y1/400+30*M1+a+D;
  if(((Y%4==0&&Y%100!=0)||(Y%400==0))&&M>2)
    N=N+1;
  return(N);
}