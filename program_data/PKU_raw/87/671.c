int main(){
	struct sk{
          int a,b,c,d,e,f;
		  }sk[100];
	int i,n;
	int time[100];
	for(i=0;;i++){
		scanf("%d%d%d%d%d%d",&sk[i].a,&sk[i].b,&sk[i].c,&sk[i].d,&sk[i].e,&sk[i].f);
		if((sk[i].a==0)&&(sk[i].b==0)&&(sk[i].c==0)&&(sk[i].d==0)&&(sk[i].e==0)&&(sk[i].f==0)){
			n=i;
		    break;
		}
	}
	for(i=0;i<n;i++){
		time[i]=(sk[i].d+12)*3600+sk[i].e*60+sk[i].f-sk[i].a*3600-sk[i].b*60-sk[i].c;
		printf("%d\n",time[i]);
	}
	return 0;
}








	

