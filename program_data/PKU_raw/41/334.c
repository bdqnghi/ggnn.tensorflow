int main(){
	int f,s;
	int i,j,k;
	int a[6] = {0};
	for(a[1]=1;a[1]<=5;++a[1])
		for(a[2]=1;a[2]<=5;++a[2]){
			if(a[1]==a[2])continue;
			for(a[3]=1;a[3]<=5;++a[3]){
				if(a[3]==a[1]||a[3]==a[2])continue;
				for(a[4]=1;a[4]<=5;++a[4]){
					if(a[4]==a[1]||a[4]==a[2]||a[4]==a[3])continue;
					a[5]=15-a[1]-a[2]-a[3]-a[4];
					if(a[2]==5||a[3]==5)continue;
					if(a[1]==1||a[2]==1){
						if(a[1]!=5)continue;
					}
					if(a[1]==2||a[2]==2){
						if(a[2]!=2)continue;
					}
					if(a[1]==3||a[2]==3){
						if(a[5]!=1)continue;
					}
					if(a[1]==4||a[2]==4){
						if(a[1]==3)continue;
					}
					if(a[1]==5||a[2]==5){
						if(a[1]!=4)continue;
					}
					int cnt = 0;
					cnt = (a[1]==5) + (a[2]==2) + (a[5]==1) + (a[1]!=3) + (a[1]==4);
					if(cnt!=2)continue;
					int b[6];
					for(int i=1;i<=5;++i){
						b[a[i]]=i;
					}
					for(int i=1;i<5;++i){
						cout<<b[i]<<" ";
					}
					cout<<b[5];
				}
			}	
		}
		cin>>f;
	return 0;
}