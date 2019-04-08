int main(){
	int nian,yue,ri,i,j=0,p;
	scanf("%d%d%d",&nian,&yue,&ri);

	if(nian>2800){
		nian%=2800;
	}

	for(i=1;i<nian;i++){
		if((i%400==0)||(i%100!=0&&i%4==0)){
			j++;
	
		
		}
	}
	

	for(i=1;i<yue;i++){
		if((i==1)||(i==3)||(i==5)||(i==7)||(i==8)||(i==10)){
			j+=31;
		
		}else{
			if((i==2)&&((nian%400==0)||(nian%100!=0&&nian%4==0))){
				j+=29;
			
			}else{
				if(i==2){
					j+=28;
			
				}else{
					j+=30;
				}
			}
		}
	}
    
j+=365*(nian-1)+ri;
	j%=7;
	if(j==0){
		printf("Sun.");
	}else{
		if(j==1){
			printf("Mon.");
		}else{
			if(j==2){
				printf("Tue.");
			}else{
				if(j==3){
					printf("Wen.");
				}else{
					if(j==4){
						printf("Thu.");
					}else{
						if(j==5){
							printf("Fri.");
						}else{
							printf("Sat.");
						}
					}
				}
			}
		}
	}

	return 0;
}