int apple(int x,int y)
{
  int k;
  if(y==1)   k=1;
  else   
   {if(x>y)   k=apple(x-y,y)+apple(x,y-1);
    if(x<y)   k=apple(x,y-1);
    if(x==y)   k=1+apple(x,y-1);}
 return(k);
 }
void main()
{
  int i,a,m[50],n[50];
  scanf("%d\n",&a);
  for(i=0;i<a;i++) scanf("%d %d\n",&m[i],&n[i]);
  for(i=0;i<a;i++)  printf("%d\n",apple(m[i],n[i]));
return(0);
}
