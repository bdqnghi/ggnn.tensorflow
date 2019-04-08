

main()
{
  char str1[260],str2[260];
  int A[260]={0},B[260]={0},C[260]={0};
  scanf("%s",str1);
  scanf("%s",str2);
  int i,j=1;
  for(i=strlen(str1)-1;i>=0;i--)
  A[(strlen(str1))-i-1]=str1[i]-'0';
  for(i=strlen(str2)-1;i>=0;i--)
  B[strlen(str2)-i-1]=str2[i]-'0';
  for(i=0;i<260;i++)
  {if (A[i]+B[i]>9) {A[i+1]+=1;
   C[i]=(A[i]+B[i])-10;}
   else C[i]=(A[i]+B[i]);}
   
  for(i=259;i>=0;i--)
  if((j!=1)||(C[i]!=0))
  {j=0;printf("%d",C[i]);}
  if ((C[0]==0)&&(j==1))
  printf("0");
}
