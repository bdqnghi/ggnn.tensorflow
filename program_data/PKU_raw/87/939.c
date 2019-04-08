
int main(){
	int a,b,c,d,e,f,result;

	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	while(a!=0){
	     result=0;
		 d=d+12;
         result=(d-(a+1))*3600;
         result+=e*60+f+3600-(b*60+c);
		 if (result!=0) {printf("%d\n",result);}
		 scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	}

    return 0;
}
