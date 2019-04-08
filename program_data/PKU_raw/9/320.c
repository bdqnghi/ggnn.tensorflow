
struct point{
		char id[10];
		int age;
	}old[100],small[100];

int main(){
	int n,i,j,o=0,s=0,t,m;
//	char x[10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		char x[10]={'\0'};
		t=0;
		scanf("%s %d",x,&t);
		if(t>=60){
			strcpy(old[o].id,x);
			old[o].age=t;
			o++;
			
		}else{
			strcpy(small[s].id,x);
			small[s].age=t;
			s++;
		}
	}
	char p[10];
	for(i=0;i<o;i++){
		for(j=1;j<o-i;j++){
			if(old[i].age>=old[i+j].age){
				m=old[i+j].age;
				old[i+j].age=old[i].age;
				old[i].age=m;
				strcpy(p,old[i+j].id);
				strcpy(old[i+j].id,old[i].id);
				strcpy(old[i].id,p);
			}
		}
	}

	for(i=o-1;i>=0;i--){
		printf("%s\n",old[i].id);
	}
	for(i=0;i<s;i++){
		printf("%s\n",small[i].id);
	}
}
