int main (){
	int sz[6],i;
	int s;
	while(1){
		for(i=0;i<=5;i++){		
			scanf("%d ",&sz[i]);
		}
		if(sz[0]!=0||sz[1]!=0||sz[2]!=0||sz[3]!=0||sz[4]!=0||sz[5]!=0){
			s=60*60*(sz[3]+12-sz[0])+60*(sz[4]-sz[1])+sz[5]-sz[2];
			printf("%d\n",s);
		}else{
			break;
		}
	}
	return 0;
}
