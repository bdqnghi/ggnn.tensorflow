void trans(int (*m)[5],int p,int q)
{
 int s,i,j;
 if(p>4||q>4)
 {
  printf("error");
 }
 else
 {
  
  for(i=0;i<5;i++)
  {
   s=*(*(m+p)+i);
   *(*(m+p)+i)=*(*(m+q)+i);
   *(*(m+q)+i)=s;
  }
  for(i=0;i<5;i++)
  {
     for (j=0;j<4;j++)
         printf("%d ",*(*(m+i)+j));
     printf("%d\n",*(*(m+i)+4));
  }
 }
}
int main()
{
 int a[5][5],i,n,j,m,(*p)[5];
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 p=a;
 for(i=0;i<5;i++)
  for(j=0;j<5;j++)
   scanf("%d",(*(p+i)+j));

 scanf("%d %d",&n,&m);
 trans(p,n,m);
 return 0;
}
