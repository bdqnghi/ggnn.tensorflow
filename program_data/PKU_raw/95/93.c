int main(){
	char p[100],q[100];
	gets(p);
	gets(q);
	int h,g;
	h=strlen(p);
	g=strlen(q);
	int j,d;
	for(j=0;j<h;j++){
		if(p[j]>=97&&p[j]<=122) p[j]=(char)(p[j]-32);
		else if((p[j]>=27&&p[j]<=96)||(p[j]>=123)) p[j]=p[j];
	}
	for(d=0;d<g;d++){
		if(q[d]>=97&&q[d]<=122) q[d]=(char)(q[d]-32);
		else if((q[d]>=27&&q[d]<=96)||(q[d]>=123)) q[d]=q[d];
	}
	int m;
	m=strcmp(p,q);
    if(m==0) printf("=");
	else if(m>0) printf(">");
	else if(m<0) printf("<");
	return 0;
}
