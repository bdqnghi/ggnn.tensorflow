int main(){
	struct ID{
		char x[100];
		int y;
	}da[100],xiao[100],p[100],e;
	int s,m=0,n=0;
	scanf("%d\n",&s);
	
	for(int i=0;i<s;i++){
		scanf("%s %d",&(p[i].x),&(p[i].y));
		if(p[i].y>=60){
			da[m]=p[i];
			m++;
		}else{
			xiao[n]=p[i];
			n++;
		}
	}
	
	for(int b=1;b<=m;b++){
		for(int v=0;v<m-b;v++){
			if(da[v].y<da[v+1].y){
				e=da[v];
				da[v]=da[v+1];
				da[v+1]=e;
			}
		}
	}
	int h,f;
	for(int z=0;z<m;z++){
		f=strlen(da[z].x);
		for(int g=0;g<f;g++){
			if(g!=f-1){
				printf("%c",da[z].x[g]);
			}else{
				printf("%c\n",da[z].x[g]);
			}
		}
	}
	for(int a=0;a<n;a++){
		h=strlen(xiao[a].x);
		for(int j=0;j<h;j++){
			if(j!=h-1){
				printf("%c",xiao[a].x[j]);
			}else{
				printf("%c\n",xiao[a].x[j]);
			}
		}
	}

	


	return 0;
}
