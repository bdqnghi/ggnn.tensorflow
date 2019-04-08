int main()
{
	int a[100][100],i,j,n,q,w,e,r,C,K,T;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
      for(i=0,j=0;j<n,i<n;j++,i++)
		{if(a[i][j]==0)
		break;}
		q=i;
		w=j;
      for(i=q,j=w;j<n;j++)
	  {if(a[i][j]==255)
	     break;}
	   e=j;
	  for(i=q,j=w;i<n;i++)
	  {if(a[i][j]==255)
	     break;}
	      r=i;
	  C=e-w;
	  K=r-q;
	  T=(C-2)*(K-2);
	  printf("%d\n",T);
	  return 0;
}