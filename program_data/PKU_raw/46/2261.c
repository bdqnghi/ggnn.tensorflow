int main()
{
	int x,y,p=1,q=1;
	double a[200][200];
	scanf("%d %d",&x,&y);
	for(p=1;p<=x;p++)
		for(q=1;q<=y;q++)
			scanf("%lf",&a[p][q]);
	for(q=0;q<=y;q++)
	        a[0][q]=0.5;
    for(q=0;q<=y;q++)
          a[x+1][q]=0.5;
    for(p=1;p<=x;p++)
            a[p][0]=0.5;
    for(p=1;p<=x;p++)
            a[p][y+1]=0.5;
	int i=1,j=1;
    while(a[i][j]-floor(a[i][j])==0)
	   {
          printf("%.0lf\n",a[i][j]);
	      a[i][j]=0.5;
        if(a[i][j+1]-floor(a[i][j+1])==0&&a[i+1][j]-floor(a[i+1][j])==0||a[i][j+1]-floor(a[i][j+1])==0&&a[i+1][j]-floor(a[i+1][j])!=0&&a[i-1][j]-floor(a[i-1][j])!=0)
            j=j+1;
		else if(a[i+1][j]-floor(a[i+1][j])==0)
			 i=i+1;
		      else if(a[i][j-1]-floor(a[i][j-1])==0)
			        j=j-1;
			        else if(a[i-1][j]-floor(a[i-1][j])==0)
			              i=i-1;
		                 else break;
	   }
  getchar();
  getchar();
return 0;
}