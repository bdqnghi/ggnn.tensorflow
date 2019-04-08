void main()
{
	int x,y,i,j;
	int a[10]={0};
	int b[10]={0};
    scanf("%d %d",&x,&y);
	a[0]=x,b[0]=y;
	if(x==1||y==1)  printf("1");
	else 
	{
	  for(i=1;x!=1;i++)
	  {   a[i]=x/2;
		   x=x/2;
	  }
      for(j=1;y!=1;j++)
	  {  b[j]=y/2;
		   y=y/2;
	  }
	  for(;i>=1,j>=1;i--,j--)
		  if(a[i-1]!=b[j-1]) {printf("%d",a[i]);
		                      break;}
	  if(i==0&&j>=0)  printf("%d",a[0]);
	  if(j==0&&i>0)  printf("%d",b[0]);
	}
}