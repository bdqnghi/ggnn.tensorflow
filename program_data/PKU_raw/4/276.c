int main(){
	int h,k,e,s,i,l;
	scanf("%d%d",&h,&l);
	int juzhen[hang][lie];
	for(i=0;i<h;i++){
		for(k=0;k<l;k++){
			scanf("%d",&(juzhen[i][k]));
		}
	}

	for(s=0;s<l;s++){
		k=s;
		i=0;
		for(e=0;e<=s;e++){
			printf("%d\n",juzhen[i][k]);
			i++;
			k--;
			if(i==h){
				break;
			}
		}	
	}
	for(e=1;e<h;e++){
		i=e;
		k=l-1;
		for(s=0;s<(h-e);s++){
			printf("%d\n",juzhen[i][k]);
			i++;
			k--;
			if(k<0){
				break;
			}		
		}
	}
return 0;
}