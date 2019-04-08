 
 


int main()
{
 int n,i;
 char name[10000][30],ganbu[10000][10],west[10000][10],str[20];
 int qime[10000],g[10000],w[10000],e[10000];
 int banji[10000],sum=0,s=0;
 int sol[10000];
 char yes[10]={'Y'};
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {sol[i]=0;
 g[i]=1;
 w[i]=1;}
 for(i=0;i<n;i++)
 {
  scanf("%s%d%d%s%s%d",&name[i],&qime[i],&banji[i],&ganbu[i],&west[i],&e[i]);
  
  g[i]=strcmp(ganbu[i],yes);
  
  w[i]=strcmp(west[i],yes);
 }
 for(i=0;i<n;i++)
 { sol[i]=0;
  if((qime[i]>80)&&(e[i]>0))
  {sol[i]+=8000;}
 }
 for(i=0;i<n;i++)
 {if((qime[i]>85)&&(banji[i]>80))
  {sol[i]+=4000;}
 }
 for(i=0;i<n;i++){
  if(qime[i]>90)
  {sol[i]+=2000;}}
 for(i=0;i<n;i++){
  if((w[i]==0)&&(qime[i]>85))
  {sol[i]+=1000;}
 }
 for(i=0;i<n;i++){
  if((g[i]==0)&&(banji[i]>80))
  {sol[i]+=850;}
 }
 for(i=0;i<n;i++){
  if(sol[i]>s)
  {s=sol[i];
  strcpy(str,name[i]);}
  sum+=sol[i];
 }
 printf("%s\n%d\n%d\n",str,s,sum);
 return 0;

}

