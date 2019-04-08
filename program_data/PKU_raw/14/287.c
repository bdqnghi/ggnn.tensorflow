int main()
{
 int n,i,max1=0,max2=0,max3=0,t1=0,t2=0,t3=0;
 int ID[100000],y[100000],m[100000],s[100000];
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d %d %d",&ID[i],&y[i],&m[i]);
 for(i=0;i<n;i++)
  s[i]=y[i]+m[i]; 
 for(i=0;i<n;i++)
 {
  if(max1<s[i])
  {
   max1=s[i];
   t1=i;             
  }                
 }
 s[t1]=0;      
 for(i=0;i<n;i++)
 {
  if(max2<s[i])
  {
   max2=s[i];
   t2=i;             
  }                
 }
 s[t2]=0;
 for(i=0;i<n;i++)
 {
  if(max3<s[i])
  {
   max3=s[i];
   t3=i;             
  }                
 }           
 printf("%d %d\n",ID[t1],max1); 
 printf("%d %d\n",ID[t2],max2);
 printf("%d %d\n",ID[t3],max3);
 getchar();
 getchar();
 getchar();
 return 0;
}
