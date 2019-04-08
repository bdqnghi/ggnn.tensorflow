int main()
{
	int n,i,k,j,sum[10001]={0},l=0,be[50000],fi[50000],o,p,d,e;
         scanf("%d",&n);
        for(i=0;i<n;i++)
             scanf("%d%d",&be[i],&fi[i]);
         o=be[0];
		 p=fi[0]; 
       for(i=0;i<n;i++)
	   {
             d=be[i];
			 e=fi[i];
			 for(;d<e;d++)
                sum[d]=1;
			 if(be[i]<o)
				 o=be[i];
			 if(fi[i]>p)
				 p=fi[i];
	   }
      for(i=o;i<p;i++)
	   {
		  if(sum[i]==0)
		  {
			  printf("no");
			  return 0;
		  }
	  }
	  printf("%d %d",o,p);
	return 0;
}