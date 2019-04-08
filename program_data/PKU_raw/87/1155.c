int main(){
	int a1,b1,c1,a2,b2,c2;
	int s=0;
	scanf("%d %d %d %d %d %d",&a1,&b1,&c1,&a2,&b2,&c2);
	while(a1!=0||b1!=0||c1!=0||a2!=0||b2!=0||c2!=0){
         s+=(a2+12-(a1+1))*3600;
		 s+=3600-(b1*60+c1);
		 s+=60*b2+c2;
		 printf("%d\n",s);
		 s=0;
	     scanf("%d %d %d %d %d %d",&a1,&b1,&c1,&a2,&b2,&c2);
	}

	return 0;
}