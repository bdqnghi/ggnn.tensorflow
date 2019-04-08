struct point1
{
  int x;
  int y;
  int z;
} point[10];

struct comb1
{
  struct point1 po1;
  struct point1 po2;
  double distant;
} comb[50],t;
int abs(int a)
{
  if(a>=0) return a;
  else return(-a);
}
double dis(struct point1 a,struct point1 b)
{
   int p,q,r;
   double ans;
   p=(a.x-b.x)*(a.x-b.x);
   q=(a.y-b.y)*(a.y-b.y);
   r=(a.z-b.z)*(a.z-b.z);
   ans=sqrt(p+q+r);
   return ans;
}

int main()
{
  int n,i,j,k;
  scanf("%d",&n);
  for(i=0;i<n;i++)
   scanf("%d%d%d",&point[i].x,&point[i].y,&point[i].z);
  k=0;
  for(i=0;i<n;i++)
   for(j=i+1;j<n;j++)
    {
	  comb[k].po1=point[i];
	  comb[k].po2=point[j];
	  comb[k].distant=dis(comb[k].po1,comb[k].po2);
	  k++;
	}
  for(i=1;i<k;i++)
   for(j=0;j<k-i;j++)
    if(comb[j].distant<comb[j+1].distant)
	{
	  t=comb[j];
	  comb[j]=comb[j+1];
	  comb[j+1]=t;
	}
  for(i=0;i<k;i++)
   printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",comb[i].po1.x,comb[i].po1.y,comb[i].po1.z,comb[i].po2.x,comb[i].po2.y,comb[i].po2.z,comb[i].distant);
  //scanf("%d",&i);
  return 0;
}