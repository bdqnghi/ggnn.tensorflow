int main(int argc, char* argv[])
{
	int n,i,j,r;
     scanf("%d",&n);
	 struct point{
		 double x,y;
	 }point[100];
	 double d,D;
	 for(i=0;i<n;i++)
	 {
		 scanf("%lf""%lf",&point[i].x,&point[i].y);
	 }
	 for(j=0;j<n;j++)
	 {
		 for(r=0;r<j;r++)
		 {
			 if(r==0&&j==1)
			 {
				 D=(point[1].x-point[0].x)*(point[1].x-point[0].x)+(point[1].y-point[0].y)*(point[1].y-point[0].y);
			 }
			 else
			 {
				 d=(point[j].x-point[r].x)*(point[j].x-point[r].x)+(point[j].y-point[r].y)*(point[j].y-point[r].y);
				 if(d>D)
				 {D=d;}
			 }
		 }
	 }
	 printf("%.4lf\n",sqrt(D));

	return 0;
}