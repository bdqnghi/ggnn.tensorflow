void main()
{
 int n,i,sum=0,j,b,t,*p;
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 p=a;
 scanf("%d",&b);
 for(i=0;i<n;i++)
  if(*(p+i)==b) sum++;
 for(i=0;i<(n-sum);i++)
    if(*(p+i)==b) 
     {for(j=i;j<n-1;j++)
         {*(p+j)=*(p+j+1);}
      i--; }
 for(i=0;i<(n-sum-1);i++)
  printf("%d ",*(p+i));
  printf("%d",*(p+i));
}

