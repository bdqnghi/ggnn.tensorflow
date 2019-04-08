int main()
{
 int Nxiaopengyou, Mtiaohuai, *Leijicishu;
 int i,j;
 int cishu,shijian;
 scanf("%d",&Nxiaopengyou);
 for(i=0;i<Nxiaopengyou;i++)
 {
  scanf("%d",&Mtiaohuai);
  if(Mtiaohuai==0)
    cishu=60;
  else
  {
    Leijicishu=(int *)malloc(Mtiaohuai);
    for(j=0;j<Mtiaohuai;j++)
      scanf("%d",&Leijicishu[j]);
    shijian=60;
    cishu=60;
    for(j=0;j<Mtiaohuai;j++)
    {
      shijian=shijian-Leijicishu[j]-3;
      if(j>0)
        shijian+=Leijicishu[j-1];
      if(shijian>0)
        cishu-=3;
      else
       {
         if(Leijicishu[j]<cishu)
           cishu=Leijicishu[j];
         break;
       }
    }
    free(Leijicishu);
  }
  printf("%d\n",cishu);
 }
 return 0;
}
