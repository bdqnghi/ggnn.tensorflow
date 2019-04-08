int main()
{
	int i=0,j=0,x=0,m=0;
	int a[20];
  	while(scanf("%d",&a[i]),a[i]!=-1)
	{while(scanf("%d",&a[i+1]),a[i+1]!=0)
	{i++;}
     for(m=0;a[m]!=0;m++)
	  for(j=m;a[j]!=0;j++)
	 {
		 if(a[m]==2*a[j]||a[j]==2*a[m])
		 x=x+1; 
	 }
		 printf("%d\n",x);
		 x=0;
		 i=0;
	}
	return 0;
}
