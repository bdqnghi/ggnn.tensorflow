

int main(){
	
	int a[5];
	int b[5];
	int correct=0;

	for(a[0]=1;a[0]<=5;a[0]++){
		for(a[1]=1;a[1]<=5;a[1]++){
			if(a[0]==a[1]) continue;
			for(a[2]=1;a[2]<=5;a[2]++){
				if(a[0]==a[2]||a[1]==a[2]) continue;
				for(a[3]=1;a[3]<=5;a[3]++){
					if(a[0]==a[3]||a[1]==a[3]||a[2]==a[3]) continue;
					for(a[4]=1;a[4]<=5;a[4]++){
						if(a[0]==a[4]||a[1]==a[4]||a[2]==a[4]||a[3]==a[4]) continue;
						if(a[4]==2||a[4]==3) continue;

						correct=0;

						if(a[0]==1||a[0]==2){
							if(a[4]==1) correct+=1;
						}
						else{
							if(a[4]!=1) correct+=1;
						}

						if(a[1]==1||a[1]==2){
							if(a[1]==2) correct+=1;
						}
						else{
							if(a[1]!=2) correct+=1;
						}

						if(a[2]==1||a[2]==2){
							if(a[0]==5) correct+=1;
						}
						else{
							if(a[0]!=5) correct+=1;
						}

						if(a[3]==1||a[3]==2){
							if(a[2]!=1) correct+=1;
						}
						else{
							if(a[2]==1) correct+=1;
						}

						if(a[4]==1||a[4]==2){
							if(a[3]==1) correct+=1;
						}
						else{
							if(a[3]!=1) correct+=1;
						}


						if(correct==5){
							for(int i=0;i<5;i++){
								b[i]=a[i];
							}
						
						}

					}
				}
			}
		}	
	}

	for(int i=0;i<5;i++){
	
		cout<<b[i];

		if(i<4) cout<<' ';
	}

	return 0;

}