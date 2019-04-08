void main()
{
   int n=0,xuefen[10]={0},defen[10]={0},i=0;
   float num=0,fen=0,GPA=0,gpa[10]={0};
   scanf("%d",&n);
   for(i=0;i<n;i++) scanf("%d",&xuefen[i]);
   for(i=0;i<n;i++) scanf("%d",&defen[i]);
   for(i=0;i<n;i++)
   {
      if(defen[i]>89) gpa[i]=4;
      else if(defen[i]>84&&defen[i]<90) gpa[i]=3.7;
      else if(defen[i]>81&&defen[i]<85) gpa[i]=3.3;
      else if(defen[i]>77&&defen[i]<82) gpa[i]=3;
      else if(defen[i]>74&&defen[i]<78) gpa[i]=2.7;
      else if(defen[i]>71&&defen[i]<75) gpa[i]=2.3;
      else if(defen[i]>67&&defen[i]<72) gpa[i]=2;
      else if(defen[i]>63&&defen[i]<68) gpa[i]=1.5;
      else if(defen[i]>59&&defen[i]<64) gpa[i]=1;
      else if(defen[i]<60) gpa[i]=0;
   }
   for(i=0;i<n;i++)
   {
      num=num+gpa[i]*xuefen[i];
      fen=fen+xuefen[i];
   }
   GPA=num/fen;
   printf("%.2f\n",GPA);
}
