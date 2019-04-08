main()
{
  int j,i,f[3],l[3],leap[2]={0,0},mth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  int n=0,inter=0,df=0,df2=0,dl=0,dn=0,lp(int y);
  for(i=0;i<=2;i++)scanf("%d",&f[i]);
  for(i=0;i<=2;i++)scanf("%d",&l[i]);
  leap[0]=lp(f[Y]);
  leap[1]=lp(l[Y]);
  i=f[Y]+1;
  
  
     if(i<l[Y])for(;i<l[Y];i++)inter+=(lp(i)+365);
     j=0;
     while(j<l[M]-1){dl+=mth[j];j++;}
     dl+=l[D];
     if(leap[1]==1&&l[M]>2)dl++;
     j=0;
     while(j<f[M]-1){df+=mth[j];j++;}
     df+=f[D];
     if(leap[0]==1&&l[M]>2)df++;
   if(f[Y]<=l[Y]){  
    df2=365+leap[0]-df;
     dn=df2+dl+inter;}
 

  if(l[Y]==f[Y])dn=dl-df;

  printf("%d",dn);
}
int lp(int y)
{
  return (y%4==0&&y%100!=0)||(y%400==0);
}