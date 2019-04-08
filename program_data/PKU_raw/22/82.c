void main()
{int n[300],i=0,max,k,mid,flag=1;
 char c;
 do
 {i++;
  scanf("%d",&n[i]);
  c=getchar();}
  while(c==',');
  k=i;
  if(k==1) flag=0;
  else 
  {max=n[1];
  for(i=1;i<=k;i++)
   if(max<n[i])
     max=n[i];
  mid=0;
  for(i=1;i<=k;i++)
    if(mid<n[i]&&n[i]<max)
		mid=n[i];}
  if(mid==0||flag==0)
	  printf("No");
  else printf("%d",mid);
 }
