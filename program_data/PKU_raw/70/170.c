

int  main(int argc, char* argv[])
{
	int a,i,j;// a ????????
	double value[100];
	int number=0;//????
	scanf("%d",&a);
	struct{
		double x;
		double y;
		 
	} point[10];
	for(i=0;i<a;i++){//?point ??
		double m,n;
		scanf("%lf%lf",&m,&n);
		point[i].x=m;
		point[i].y=n;
	}
     
	for(i=0;i<a-1;i++){
		for(j=a-1;j>i;j--){
	   value[number]=sqrt( pow((point[i].x -point[j].x),2) +pow((point[i].y-point[j].y),2));
	    number++;
		}
	}
	 
	for(i=0;i<number;i++){  //???? a-1
		double turn;
		if(value[i]>value[i+1]){
		turn= value[i+1];
		value[i+1]=value[i];
		value[i]=turn;
		}
		else;
	}
	
		printf("%.4lf",value[number]);
   
    return 0;
	
}

