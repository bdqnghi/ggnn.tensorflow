int main(){
int i,k,sz[1000],sf[1000],n;
double sc[1000];
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d %d",&(sz[i]),&(sf[i]));
}
for(i=0;i<n;i++){
	sc[i]=sf[i]*1.0/sz[i];
}
for(i=1;i<n;i++){
	if(sc[i]-sc[0]>0.05){
		printf("better\n");
	}
	else if(sc[0]-sc[i]>0.05){
		printf("worse\n");
	}
	else  {printf("same\n");
	}
}
return 0;
}
