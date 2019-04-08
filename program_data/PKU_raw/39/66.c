int main()
{
 int n,p,i,j,end[100],class[100],issue[100],k[100],sum=0;
 char monitor[100],province[100],name[100][20];
 int max;
 scanf("%d\n",&n); 
 
 for(i=0;i<n;i++)
  scanf("%s %d %d %c %c %d",&name[i],&end[i],&class[i],&monitor[i],&province[i],&issue[i]);
 
 for(i=0;i<n;i++)
  k[i]=0;
 for(i=0;i<n;i++)
 {
 if(end[i]>80&&issue[i]>=1) k[i]=k[i]+8000;
 if(end[i]>85&&class[i]>80) k[i]=k[i]+4000;
 if(end[i]>90) k[i]=k[i]+2000;
 if(end[i]>85&&province[i]=='Y')  k[i]=k[i]+1000;
 if(class[i]>80&&monitor[i]=='Y') k[i]=k[i]+850;
 }

 max=k[0];

 for(i=0;i<n;i++)
  sum=sum+k[i]; 
 for(i=0;i<n;i++)
 {
  if(k[i]>max)
  {
   max=k[i];
   p=i; 
  }
 }

  printf("%s\n",name[p]);
 printf("%d\n%d",max,sum);

return 0;
}



