int main(){
	int a,b,c,d[8][8],e,f=0,h,i,j;
	char l='c';
	scanf("%d,%d",&a,&b);
	for(c=0;c<a;c++){
		for(e=0;e<b;e++){
			scanf("%d",&d[c][e]);
		}
	}
	for(c=0;c<a;c++){
		l='c';
		for(e=0;e<b;e++){
			l='c';
			for(h=0;h<b;h++){
				if(d[c][h]>d[c][e]){
					l='b';
					break;
				}
			}
			for(h=0;h<a;h++){
				if(d[h][e]<d[c][e]){
					l='b';
					break;
				}
			}
			if(l=='c'){
				f++;
				i=c;
				j=e;
				break;
			}
		}
		if(f==1){
			break;
		}
	}
	if(f==1){
		printf("%d+%d",i,j);
	}
	else{
		printf("No");
	}
	return 0;
}
