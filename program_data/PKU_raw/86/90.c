void main()
{
 int n,i,j,breaks[100],times[100][10],sum[100];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&breaks[i]);
  for(j=0;j<breaks[i];j++)
   scanf("%d",&times[i][j]);
 }
 for(i=0;i<n;i++)
 {
  if(breaks[i]==0) 
  {
   sum[i]=60;goto end;
  }
  if((times[i][breaks[i]-1]+breaks[i]*3)<=60)
  {
   sum[i]=60-breaks[i]*3;
   goto end;
  }
  for(j=0;j<breaks[i];j++)
  {
   if((times[i][j]+3*j)>=57&&(times[i][j]+j*3)<=60)
   {
    sum[i]=times[i][j];
    goto end;
   }
  }
  for(j=0;j<breaks[i]-1;j++)
  {
   if((times[i][j]+j*3)<=60&&(times[i][j+1]+j*3+3)>=60)
   {
    sum[i]=60-3*j-3;
    goto end;
   }
  }
  end:;
 }
 for(i=0;i<n;i++)
	 printf("%d\n",sum[i]);
}

