struct pat
{
    char num[10];
	int age;
	int x;
}p[100],P[100],s;
int main()
{
    int n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%s %d",p[i].num,&p[i].age);
		if(p[i].age>=60) p[i].x=p[i].age;
		else p[i].x=0;
	}
    for(i=0;i<n;i++){
		s.age=-1;
		s.x=-1;
		char k[10];
		for(j=0;j<n;j++){
			if(s.x<p[j].x){
				s=p[j];
				strcpy(k,p[j].num);
			}
		}
		P[i]=s;
		for(j=0;j<n;j++){
			if(strcmp(p[j].num,k)==0){
			    p[j].x=-2;
				break;
			}
		}
	}
    for(i=0;i<n;i++){
	printf("%s\n",P[i].num);
	}
return 0;
}