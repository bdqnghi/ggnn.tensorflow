int main(){
int sz[5][5];
int zd[5];
int zx[5];
int s,p=0,a,b;
for(a=0;a<5;a++){
	for(b=0;b<5;b++){
		scanf("%d",&sz[a][b]);
	}
}
	for(a=0;a<5;a++){
		s=0;
	for(b=0;b<5;b++){
	
	if(sz[a][b]>=s) {
     s=sz[a][b];
	zd[a]=s;
	
	}
	
	}
	}
	for(b=0;b<5;b++){
		s=100000;
	for(a=0;a<5;a++){
if(sz[a][b]<=s) 
{s=sz[a][b];
	zx[b]=s;
}
	}
	}

for(a=0;a<5;a++){
	for(b=0;b<5;b++){
		if(sz[a][b]==zd[a]&&sz[a][b]==zx[b]){
			printf("%d %d %d",a+1,b+1,sz[a][b]);
		p++;
	}
}
}
	if(p==0)
		printf("not found");

 return 0;
}

