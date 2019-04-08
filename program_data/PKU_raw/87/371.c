int main (){
	int n[100];
	int m=0,i;
	struct time{
		int a,b,c,d,e,f;
	}t[100];
	for (i=0;i<100;i++){
		scanf("%d %d %d %d %d %d",&t[i].a,&t[i].b,&t[i].c,&t[i].d,&t[i].e,&t[i].f);
		m++;
		if(t[i].a==0&&t[i].b==0&&t[i].c==0&&t[i].d==0&&t[i].e==0&&t[i].f==0){
			break;
		}
	}
	for(i=0;i<m-1;i++){
		n[i]=(t[i].d+12-t[i].a)*3600+t[i].e*60+t[i].f-(t[i].b*60+t[i].c);
		printf("%d\n",n[i]);
	}
	return 0;
}