int main()
{
  int n,e,f,h,j,k,max=0,l=0,s=0,i;
  scanf("%d",&n);
  struct xinxi{
      char name[50];
      int qc;// ???? //
      int bc;//  ???? //
      char g;//  ??????  //
      char w;//   ???????  //
      int ls;//????//
  }a[100];
  int score[100]={0};
  for(i=0;i<n;i++){
     scanf("%s %d %d %c %c %d",&a[i].name,&a[i].qc,&a[i].bc,&a[i].g,&a[i].w,&a[i].ls);
      e=f=h=j=k=0;
     if(a[i].qc>80 && a[i].ls>=1)
          e=8000;
    if(a[i].qc>85 && a[i].bc>80)
          f=4000;
    if(a[i].qc>90)
          h=2000;
    if(a[i].qc>85 && a[i].w=='Y')
          j=1000;
    if(a[i].bc>80 && a[i].g=='Y')
          k=850;
    score[i]=e+f+h+j+k;
    s=s+score[i];
    if (max<score[i])
       max=score[i];
  }
  for(i=0;i<n;i++){
    if(max==score[i]){
     printf("%s\n",a[i].name);
     printf("%d\n",max);
     printf("%d\n",s);
     l++;
    }
    if(l>0)
      break;
  }
 return 0;
}
