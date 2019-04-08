int main(){
	int  n;
	int x=0;
	float y=0;
    int sz1[10];
	int sz2[10];
	float sz3[10];
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&sz2[i]);
	}
	for(i=0;i<n;i++){
	x+=sz2[i];
	}
	for(i=0;i<n;i++){
	scanf("%d",&sz1[i]);
	if(sz1[i]>=90&&sz1[i]<=100){
	sz3[i]=4.0*sz2[i];
	}else if(sz1[i]>=85&&sz1[i]<=89){
	sz3[i]=3.7*sz2[i];
	}else if(sz1[i]>=82&&sz1[i]<=84){
	sz3[i]=3.3*sz2[i];
	}else if(sz1[i]>=78&&sz1[i]<=81){
	sz3[i]=3.0*sz2[i];
	}else if(sz1[i]>=75&&sz1[i]<=77){
	sz3[i]=2.7*sz2[i];
	}else if(sz1[i]>=72&&sz1[i]<=74){
	sz3[i]=2.3*sz2[i];
	}else if(sz1[i]>=68&&sz1[i]<=71){
	sz3[i]=2.0*sz2[i];
	}else if(sz1[i]>=64&&sz1[i]<=67){
	sz3[i]=1.5*sz2[i];
	}else if(sz1[i]>=60&&sz1[i]<=63){
	sz3[i]=1.0*sz2[i];
	}else if(sz1[i]<60){
	sz3[i]=0.0*sz2[i];
	}
	}
	for(i=0;i<n;i++){
	y+=sz3[i];
	}
	printf("%.2f",y/x);
	return 0;
	}