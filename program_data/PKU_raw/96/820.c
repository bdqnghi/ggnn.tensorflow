int main(){
	char s[110];
	int sz[110],ys,i,l,szsh[110];
	memset(sz,0,sizeof(sz));
	
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++){
		sz[i]=s[i]-'0'+0;

	}
	if(l==1){
		printf("0\n%d\n",sz[0]);
	}
	else{
	if(sz[0]*10+sz[1]<=12&&l==2){
		printf("0\n%d\n",sz[0]*10+sz[1]);
	}

	else {if(sz[0]*10+sz[1]<13){
		szsh[2]=(sz[0]*100+sz[1]*10+sz[2])/13;
		ys=(sz[0]*100+sz[1]*10+sz[2])%13;
		
		for(i=3;i<l;i++){
			if(ys<2&&sz[i]<=2){
				szsh[i]=0;
				szsh[i+1]=(ys*100+sz[i]*10+sz[i+1])/13;
				ys=(ys*100+sz[i]*10+sz[i+1])%13;
				i++;
			}
			else{
				szsh[i]=(ys*10+sz[i])/13;
				ys=(ys*10+sz[i])%13;

			}


		}
		for(i=2;i<l;i++){
			printf("%d",szsh[i]);
		}
		printf("\n%d\n",ys);
		


	}

	else{
		szsh[1]=(sz[0]*10+sz[1])/13;
		ys=(sz[0]*10+sz[1])%13;
		
		for(i=2;i<l;i++){
			if(ys<2&&sz[i]<=2){
				szsh[i]=0;
				szsh[i+1]=(ys*100+sz[i]*10+sz[i+1])/13;
				ys=(ys*100+sz[i]*10+sz[i+1])%13;
				i++;
			}
			else{
				szsh[i]=(ys*10+sz[i])/13;
				ys=(ys*10+sz[i])%13;

			}


		}

		
			for(i=1;i<l;i++){
			printf("%d",szsh[i]);
		}
		printf("\n%d\n",ys);	
		
	}
	}
	}
	return 0;	
}