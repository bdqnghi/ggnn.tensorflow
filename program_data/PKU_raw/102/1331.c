int main()
{
int number,lm=0,lw=0,i,j,m,n;
float height[50],hm[50],hw[50],k;
char sex[50][10],male[5]={'m','a','l','e'},female[7]={'f','e','m','a','l','e'};
scanf("%d",&number);
for(i=0;i<number;i++)
 {
 scanf("%s%f",sex[i],&height[i]);
 }
for(i=0;i<number;i++)
 {
 if(strcmp(sex[i],male)==0)
  {
  hm[lm]=height[i];
  lm++;
  }
 if(strcmp(sex[i],female)==0)
  {
  hw[lw]=height[i];
  lw++;
  }
 }
for(i=0;i<lm;i++)
 {
  for(j=0;j<(lm-1);j++)
  {
  if(hm[j]>hm[j+1])
   {
   k=hm[j];
   hm[j]=hm[j+1];
   hm[j+1]=k;
   }
  }
 }
for(i=0;i<lw;i++)
 {
  for(j=0;j<(lw-1);j++)
  {
  if(hw[j]<hw[j+1])
   {
   k=hw[j];
   hw[j]=hw[j+1];
   hw[j+1]=k;
   }
  }
}
printf("%.2f",hm[0]);
for(i=1;i<lm;i++)
 printf(" %.2f",hm[i]);
for(i=0;i<lw;i++)
 printf(" %.2f",hw[i]);

}
