int main()
{
	int a[1000],b[1000]={0},r[1000]={0},i,j,k=0,max=0;
	char c[1003]={'\0'},d[1000]={'\0'};
	for(i=0;i<2000;i++)
	{
		scanf("%d%c",&a[i],&c[i]);
         if(c[i]!=',')
		 {  i=i+1;
			 break;
		 }
	}
	 for(j=0;j<i;j++)
	 {
       scanf("%d",&b[j]);
	   scanf("%c",&d[j]);
       
	 }
      printf("%d ",i);
     for(j=0;j<1000;j++)
	 {
		 for(k=0;k<i;k++)
		 {
		 if(j>=a[k]&&j<b[k])
		  r[j]=r[j]+1;	 
		 }
	 }
     for(j=0;j<1000;j++)
	 {
	   if(r[j]>max)
		   max=r[j];
	 }
	 printf("%d",max);
	
	return 0;
}