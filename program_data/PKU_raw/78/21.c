
struct person{
	char name;
	int weight;
}p[4];

//p0=z p1=q p2=s p3=l

int check(int a,int b,int c,int d){
	if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
		return 1;
	}else{
		return 0;
	}
}

void main(){
	int i,j,tempw;
	char tempc;
	p[0].name='z';
	p[1].name='q';
	p[2].name='s';
	p[3].name='l';
	for(p[0].weight=10;p[0].weight<=50;p[0].weight=p[0].weight+10){
		for(p[1].weight=10;p[1].weight<=50;p[1].weight=p[1].weight+10){
			for(p[2].weight=10;p[2].weight<=50;p[2].weight=p[2].weight+10){
				for(p[3].weight=10;p[3].weight<=50;p[3].weight=p[3].weight+10){
					if(check(p[0].weight,p[1].weight,p[2].weight,p[3].weight)){
						if((p[0].weight+p[1].weight==p[2].weight+p[3].weight)&&(p[0].weight+p[3].weight>p[1].weight+p[2].weight)&&(p[0].weight+p[2].weight<p[1].weight)){
							for(i=3;i>0;i--){
								for(j=0;j<i;j++){
									if(p[j].weight<p[j+1].weight){
										tempw=p[j].weight;
										p[j].weight=p[j+1].weight;
										p[j+1].weight=tempw;
										tempc=p[j].name;
										p[j].name=p[j+1].name;
										p[j+1].name=tempc;
									}
								}
							}
							for(i=0;i<4;i++){
								printf("%c %d\n",p[i].name,p[i].weight);
							}
						}
					}
				}
			}
		}
	}
}

