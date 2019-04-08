int main() {
	int a,b,c,d,e,f,s,i;
	for(i=0;;i++) {
        scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if((a==0&&b==0&&c==0&&d==0&&e==0&&f==0)==0) {
		
	    s=3600*d+60*e+f+12*3600-3600*a-60*b-c;
	    printf("%d\n",s);
		}
		if((a==0&&b==0&&c==0&&d==0&&e==0&&f==0)==1) {
			break;
		}
	}
	   
	return 0;
}