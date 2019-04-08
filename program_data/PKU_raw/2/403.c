
struct chs{
	char zz[27];
	int num;
}cs[],*p;
int main(){
	int n;
	scanf("%d",&n);
	struct chs *cs=(struct chs *)malloc(sizeof(struct chs)*n);
	for(p=cs;p<cs+n;p++){
		scanf("%d%s",&(p->num),p->zz);
	}
	int l,a,zm[26],*z;
	for(z=zm;z<zm+26;z++){
		*z=0;
	}
	char *q;
	for(p=cs;p<cs+n;p++){
		l=strlen(p->zz);
		for(q=p->zz;*q!='\0';q++){
			a=(int)(*q);
			(*(zm+a-65))++;
		}
	}
	int max=0;
	for(z=zm;z<zm+26;z++){
		if(*z>*(zm+max)){
			max=z-zm;
		}
	}
	printf("%c\n%d\n",(char)(max+65),*(zm+max));
	for(p=cs;p<cs+n;p++){
		l=strlen(p->zz);
		for(q=p->zz;*q!='\0';q++){
			a=(int)(*q);
			if((a-65)==max){
				printf("%d\n",p->num);
			}
		}
	}
	free(cs);
	return 0;
}
