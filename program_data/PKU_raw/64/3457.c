struct twopoint{
    float a1[3],a2[3],c;
}b[45];
float a[10][3];
int select(float b[],int n){
	int i,j,c;
	for(i=0;i<n;i++){ c=0;
	for(j=0;j<3;j++)
		if(b[j]==a[i][j]) c++;
		if(c==3) return(i);
	}
}
void selectsort(struct twopoint b[],int n,int m){
	int i,j,k,i1,j1; 
	float d[4];
	struct twopoint temp;
	for(i=0;i<n;i++){   d[3]=0;
	for(j=0;j<3;j++){
		d[j]=b[i].a1[j]-b[i].a2[j];
		d[j]=d[j]*d[j];
		d[3]+=d[j];
	}
	b[i].c=sqrt(d[3]);
	}
	for(i=0;i<n-1;i++){
k=i;
for(j=i+1;j<n;j++)
if(b[j].c>b[k].c) k=j;
else if(b[j].c==b[k].c){
	i1=select(b[j].a1,m);
	j1=select(b[k].a1,m);
	if(i1<j1) k=j;
	if(i1==j1){
	i1=select(b[j].a2,m);
	j1=select(b[k].a2,m);
	if(i1<j1)   k=j;
	}
}

if(k!=i){
	temp=b[k];
	b[k]=b[i];
	b[i]=temp;
}
	}
}
main(){
int n1,n2,i,j,k,l=0,l1;
scanf("%d",&n1);
k=(n1-1)*n1/2;    n2=n1;
for(i=0;i<n1;i++)
	for(j=0;j<3;j++)
		scanf("%f",&a[i][j]);
	i=0;
	while(--n2>0){    l1=l;
	for(;l<l1+n2;l++)
		for(j=0;j<3;j++)
			b[l].a1[j]=a[i][j];
		i++;
	}
	n2=n1;l=0;i=0;
	while(--n2>0){   l1=l;i++;
	for(;l<l1+n2;l++)
	for(j=0;j<3;j++)
			b[l].a2[j]=a[l-l1+i][j];
	}
	selectsort(b,k,n1);
	for(i=0;i<k;i++)
		printf("(%g,%g,%g)-(%g,%g,%g)=%0.2f\n",b[i].a1[0],b[i].a1[1],b[i].a1[2],b[i].a2[0],b[i].a2[1],b[i].a2[2],b[i].c);
}
