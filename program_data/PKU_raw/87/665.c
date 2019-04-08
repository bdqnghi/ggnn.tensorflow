int main()
{
	int n=0;
	int s;
	struct sd{
		int a,b,c,d,e,f;
	}sj[100];
	for(n=0;;n++){
	scanf("%d%d%d%d%d%d\n",&(sj[n].a),&(sj[n].b),&(sj[n].c),&(sj[n].d),&(sj[n].e),&(sj[n].f));
	if(sj[n].a==0){
		    break;
	}else{
	sj[n].d=sj[n].d+11;
	sj[n].e=sj[n].e+59;
	sj[n].f=sj[n].f+60;
	s=3600*(sj[n].d-sj[n].a)+60*(sj[n].e-sj[n].b)+sj[n].f-sj[n].c;
	printf("%d\n",s);
	}
	}
	return 0;
}
