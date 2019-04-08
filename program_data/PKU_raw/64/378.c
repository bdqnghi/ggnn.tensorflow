void main()
{
  char *p;
  int a[12][3], n,i,j,t=1;
  double b[50][3],temp;
  p="%d%d%d";
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     scanf(p,&a[i][0],&a[i][1],&a[i][2]);
  }
  for(i=1;i<=n-1;i++)
	  for(j=i+1;j<=n;j++)
	  {
	    b[t][0]=sqrt(pow(a[i][0]-a[j][0],2)+pow(a[i][1]-a[j][1],2)+pow(a[i][2]-a[j][2],2));
		b[t][1]=i;
		b[t][2]=j;
		t++;
	  }
  for(i=1;i<t-1;i++)
	  for(j=1;j<t-i;j++)
	  {
	    if(b[j][0]<b[j+1][0])
		{
		   temp=b[j+1][0];
		   b[j+1][0]=b[j][0];
		   b[j][0]=temp;
		   temp=b[j+1][1];
		   b[j+1][1]=b[j][1];
		   b[j][1]=temp;
		   temp=b[j+1][2];
		   b[j+1][2]=b[j][2];
		   b[j][2]=temp;
		
		}
	  }
  for(i=1;i<t;i++)
	  printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",a[(int)(b[i][1])][0],a[(int)(b[i][1])][1],a[(int)(b[i][1])][2],a[(int)(b[i][2])][0],a[(int)(b[i][2])][1],a[(int)(b[i][2])][2],b[i][0]);
}