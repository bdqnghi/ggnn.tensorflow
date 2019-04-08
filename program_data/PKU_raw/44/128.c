int reverse(char n[8]);

int main(){
	int j,z,i,c,k;
	char jieguo[6][8];
	char su[8];
	for(j=0;j<6;j++){
		scanf("%s",su);
		c=strlen(su);
		z=reverse(su);
		switch(z){
		case 1: {jieguo[j][0]=su[0];
			jieguo[j][1]='\0';
			break;}
		case 2: {jieguo[j][0]=su[0];
			for(i=1;i<c;i++){
				jieguo[j][i]=su[c-i];
			}
			jieguo[j][c]='\0';
				break;}
		case 3:{for(i=0;i<c;i++){
					jieguo[j][i]=su[c-1-i];
			   }
			   jieguo[j][c]='\0';
			   break;
			   }
		case 4:{jieguo[j][0]=su[0];
			for(i=1;i<c;i++){
				if(su[c-i]!='0')
					break;
			}
			for(k=1;k<=c-i;k++){
			jieguo[j][k]=su[c-i-k+1];
			}
			jieguo[j][k]='\0';
			   }
			   break;
		case 5:{for(i=0;i<c;i++){
				if(su[c-i-1]!='0')
					break;
			   }
			   for(k=0;k<c-i;k++){
			   jieguo[j][k]=su[c-i-k-1];
			   }
			   jieguo[j][k]='\0';
			   }break;
		}
	}
	for(j=0;j<6;j++){	
		printf("%s\n",jieguo[j]);
	}
	return 0;
}
int reverse(char n[8]){
	int b,i,jieguo;
	b=strlen(n);
	if(b==1){
		jieguo=1;
	}else{
		if(n[0]=='-'){
			jieguo=2;
			if(n[b-1]=='0'){
				jieguo=4;
			}
		}else{
			jieguo=3;
			if(n[b-1]=='0'){
				jieguo=5;
		}
	}
	}
	return(jieguo);
}
