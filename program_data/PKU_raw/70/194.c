int main(int argc, char* argv[])
{
	struct {
		double x,y;
	}zb[number];
	    int n;
		double dis;
		double max=0.0;
	int i,j;
	scanf("%d/n",&n);
	for(i=0; i<n; i++){
		double x1,y1;
        scanf ("%lf" "%lf/n",&x1,&y1);
	        zb[i].x=x1;
			zb[i].y=y1;
         }
			for(i=0;i<n;i++)
			{
		for(j=0;j<n;j++)
		{
			dis=sqrt(pow(zb[i].x-zb[j].x,2)+pow(zb[i].y-zb[j].y,2));
			if(dis>max){
			max=dis;
			}
		}
			}
	printf("%.4f",max);
	return 0;
}