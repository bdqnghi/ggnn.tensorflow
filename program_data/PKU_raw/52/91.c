
int main(){
    struct shu{
        int z;
        struct shu*next;
	}*shu,*header;
    int n,m,i,d=1;
    scanf("%d""%d",&n,&m);
    shu=(struct shu*)malloc(sizeof(struct shu)*n);
    for(i=0;i<n;i++){
        scanf("%d",&(shu[i].z));
	}
    header=&shu[n-m];
	for(i=n-m;i<n-1;i++){
		shu[i].next=&shu[i+1];
	}
	shu[n-1].next=&shu[0];
	for(i=0;i<n-m-1;i++){
		shu[i].next=&shu[i+1];
	}
	shu[n-m-1].next=NULL;
    struct shu*p;
    p=header;
    while(p!=NULL){
        printf("%d",p->z);
        p=p->next;
		if(d<n)printf(" ");
		d++;
	}
    free(shu);

    return 0;

}
