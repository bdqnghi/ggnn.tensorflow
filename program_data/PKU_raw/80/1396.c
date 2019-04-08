int main()
{
	int a=0,m;
	int Ori[2][3];
	scanf("%d %d %d",&Ori[0][0],&Ori[0][1],&Ori[0][2]);
	scanf("%d %d %d",&Ori[1][0],&Ori[1][1],&Ori[1][2]);
	int sy,sm=Ori[0][1],ey=Ori[1][0],em=Ori[1][1];
	for(sy=Ori[0][0];sy<Ori[1][0];sy++){
		if(Ori[0][1]<=2){
	    if((sy%4==0&&sy%100!=0)||(sy%100==0&&sy%400==0)) a+=366;
		else a+=365;
		}
		else{
		if(((sy+1)%4==0&&(sy+1)%100!=0)||((sy+1)%100==0&&(sy+1)%400==0)) a+=366;
		else a+=365;
		}
	}
	int D[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if((Ori[0][1]<Ori[1][1])||(Ori[0][1]==Ori[1][1]&&Ori[0][2]<Ori[1][2])){
		if(Ori[0][1]!=Ori[1][1]){
			for(m=1;m<=12;m++){
				if(m==sm&&m<Ori[1][1]){
				    a+=D[m-1];
					sm++;
				}
			}
		}
	a+=(Ori[1][2]-Ori[0][2]);
	if(((ey%4==0&&ey%100!=0)||(ey%100==0&&ey%400==0))&&(Ori[0][1]<=2&&Ori[1][1]>2)) a+=1;
	printf("%d",a);
    }
	else{
		if(Ori[0][1]!=Ori[1][1]){
			for(m=1;m<=12;m++){
				if(m==em&&m<Ori[0][1]){
				    a-=D[m-1];
					em++;
				}
			}
		}
	a-=(Ori[0][2]-Ori[1][2]);
	if(((ey%4==0&&ey%100!=0)||(ey%100==0&&ey%400==0))&&(Ori[1][1]<=2&&Ori[0][1]>2)) a-=1;
	printf("%d",a);
	}
    return 0;
}
