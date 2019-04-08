int main(){
	struct sz{
          int a,b,c,d,e,f;
		  }sz[100];
	int i,n;
	for(i=0;;i++){

     	scanf("%d%d%d%d%d%d",&sz[i].a,&sz[i].b,&sz[i].c,&sz[i].d,&sz[i].e,&sz[i].f);
     	if(sz[i].a==0){
		    break;
		}

	}
	n=i;
	int t[100];
	for(i=0;i<n;i++){
		t[i]=12*60*60-sz[i].a*3600-sz[i].b*60-sz[i].c+sz[i].d*3600+sz[i].e*60+sz[i].f;
		printf("%d\n",t[i]);
	}
	return 0;
}



	