int main()
{
  int n,a[10000];char v[1000][10000];int m=0;
  scanf("%d",&n);
  for(int i=0;i<=n-1;i++)
  {
	scanf("%s",v[i]);	
  }
 for(int i=0;i<=n-1;i++)
 {
   for(int j=0;j<=strlen(v[i])-1;j++)
   { 
	a[j]=0;
	 for(int k=0;k<=strlen(v[i])-1;k++)	
	  {
		if(v[i][j]==v[i][k])
		 {
		  a[j]++;		
		 }
	   }	
	}
   for(int t=0;t<=strlen(v[i])-1;t++)
    {
	  if(a[t]!=1){m++;}	
	}
	if(m==strlen(v[i])){printf("no\n");m=0;}
	else{
		for(int t=0;t<=strlen(v[i])-1;t++)
		if(a[t]==1){printf("%c\n",v[i][t]);m=0;break;}
		
		}	
} 
 return 0;
 	
}
