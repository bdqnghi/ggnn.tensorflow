int main()
{
	int a,i,j;
	float r,rt=0,bt=0.00,GPA;
	int scores[100];
	float point[100];
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&scores[i]);
		bt+=scores[i];
	}
		for(j=0;j<a;j++)
	{
		scanf("%f",&point[j]);
		if(90<=point[j]&&point[j]<=100){
			r=4.00*scores[j];
		}
		if(85<=point[j]&&point[j]<=89){
			r=3.70*scores[j];
		}
		if(82<=point[j]&&point[j]<=84){
			r=3.30*scores[j];
		}
		if(78<=point[j]&&point[j]<=81){
			r=3.00*scores[j];
		}
		if(75<=point[j]&&point[j]<=77){
			r=2.70*scores[j];
		}
		if(72<=point[j]&&point[j]<=74){
			r=2.30*scores[j];
		}
		if(68<=point[j]&&point[j]<=71){
			r=2.00*scores[j];
		}
		if(64<=point[j]&&point[j]<=67){
			r=1.50*scores[j];
		}
		if(60<=point[j]&&point[j]<=63){
			r=1.00*scores[j];
		}
		if(point[j]<60){
			r=0.00*scores[j];
		}
		rt=rt+r;
	}	
		GPA=1.00*rt/bt;
		printf("%.2f",GPA);
		return 0;
}