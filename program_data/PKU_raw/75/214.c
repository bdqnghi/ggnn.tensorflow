
void main()
{
	int i,j,c,k,r,n,m,max=0,flag,temp,a[1000]={0},b[1000]={0},d[1000]={0};
	j=1;
	scanf("%d",&a[0]);
     while(c=getchar()!='\n')
	 {scanf("%d",&a[j]);j++;}
	 j=1;
	 scanf("%d",&b[0]);
      while(c=getchar()!='\n')
	  {scanf("%d",&b[j]);j++;}
     printf("%d ",j);
	// printf("%d %d\n",a[1],b[1]);
    for(i=0;i<1000;i++)
		d[i]=0;
	 for(i=0;i<1000;i++)
		for(k=0;k<j;k++)
			if(a[k]<=i&&b[k]>i) d[i]++;
     
	 for(i=0;i<1000;i++)
		 if(max<d[i]) {max=d[i];r=i;}
		 printf("%d\n",max);
}