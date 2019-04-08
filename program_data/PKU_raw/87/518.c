int main(){
	struct point{
		int a,b,c,d,e,f;
	}
	sz[100];
	int i=0;
	int count=0;
	for(i=0;i<100;i++){
		scanf("%d%d%d%d%d%d",&sz[i].a,&sz[i].b,&sz[i].c,&sz[i].d,&sz[i].e,&sz[i].f);
		count++;
		if(sz[i].a==0&&sz[i].b==0&&sz[i].c==0&&sz[i].d==0&&sz[i].e==0&&sz[i].f==0){
			break;
		}
	}

	int xsz[100];
	for(i=0;i<count-1;i++){
		xsz[i]=(12-sz[i].a-1)*3600+(60-sz[i].b-1)*60+(60-sz[i].c)+3600*sz[i].d+60*sz[i].e+sz[i].f;
	}
	for(i=0;i<count-1;i++){
		printf("%d\n",xsz[i]);
	}



	return 0;
}

