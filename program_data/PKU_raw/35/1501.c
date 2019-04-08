int sz[8][8];
int main(){
	int a,b,row,row1,col,e,t,s,m=0;
	scanf("%d,%d",&a,&b);
	for(row=0;row<a;row++){
		for(col=0;col<b;col++){
			scanf("%d",&sz[row][col]);
		}
	}
	for(row=0;row<a;row++){  //11
//		printf("row= %d\n",row);
		e=sz[row][0];
		t=0;
		s=row;
		for(col=0;col<b;col++){  //12
				if(e<sz[row][col]){
				e=sz[row][col];
				t=col;
				}
		}
		for(row1=0;row1<a;row1++){
//			printf("row1=%d\n",row1);
			if(e>sz[row1][t]){
				break;
			}
			else if(row1==a-1){
				printf("%d+%d",s,t);
				m=1;
			}
		}
		if(m==1)
			break;
		else if(m==0 && row==a-1)
			printf("No");
	}
	return 0;
}


