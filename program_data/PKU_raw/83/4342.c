int main(){
        int chengji[10], i, xuefen[10], n,j;
        int s=0;	
		double t=0;
double GPA,point[100];
scanf("%d",&n);
for(j=0;j<n;j++){
        scanf("%d",&xuefen[j]);
        s+=xuefen[j];
}
for(i=0;i<n;i++){
		scanf("%d",&chengji[i]);
	if((chengji[i]>=90)&&(chengji[i]<=100)){
		point[i]=4.0;
	}else if((chengji[i]>=85)&&(chengji[i]<=89)){
		point[i]=3.7;
	}else if((chengji[i]>=82)&&(chengji[i]<=84)){
		point[i]=3.3;
	}else if((chengji[i]>=78)&&(chengji[i]<=81)){
		point[i]=3.0;
	}else if((chengji[i]>=75)&&(chengji[i]<=77)){
		point[i]=2.7;
	}else if((chengji[i]>=72)&&(chengji[i]<74)){
		point[i]=2.3;
	}else if((chengji[i]>=68)&&(chengji[i]<=71)){
		point[i]=2.0;
	}else if((chengji[i]>=64)&&(chengji[i]<=67)){
		point[i]=1.5;
	}else if((chengji[i]>=60)&&(chengji[i]<=63)){
		point[i]=1.0;
	}else {
        point[i]=0;
	}
	t+=point[i]*xuefen[i];
	
	}
	GPA=1.0*t/s;
	printf("%.2f",GPA);
	return 0;
}
     
