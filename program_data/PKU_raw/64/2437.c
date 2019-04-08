struct equal{
  int i1,j1,k1;
  int i2,j2,k2;
  double distance;
};

void bubblesort(struct equal d[],int n);
struct node{
int i,j,k;
};
int main(){
  int n,i;
  scanf("%d",&n);
  struct node aa[n];
  for( i=0;i<n;i++)
	{scanf("%d%d%d",&(aa[i].i),&(aa[i].j),&(aa[i].k));
	}
  struct equal equal1[1000];
  int a,b,c,g,p=0;
  for(a=0;a<n;a++){
     for(b=a+1;b<n;b++){
         equal1[p].i1=aa[a].i;equal1[p].j1=aa[a].j;equal1[p].k1=aa[a].k;
         equal1[p].i2=aa[b].i;equal1[p].j2=aa[b].j;equal1[p].k2=aa[b].k;
         equal1[p].distance=sqrt(pow((double)(equal1[p].i1-equal1[p].i2),2)+pow((double)(equal1[p].j1-equal1[p].j2),2)+pow((double)(equal1[p].k1-equal1[p].k2),2));
	      p++;
     }
  }
  bubblesort(equal1,p);
  for(g=0;g<p;g++){
  printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",equal1[g].i1,equal1[g].j1,equal1[g].k1,equal1[g].i2,equal1[g].j2,equal1[g].k2,equal1[g].distance);
  }
  return 0;
}

void bubblesort(struct equal d[],int n){
	int i,j,m;double t;
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
		   if(d[j].distance>d[j-1].distance){
			 t=d[j].distance;d[j].distance=d[j-1].distance;d[j-1].distance=t;
             m=d[j].i1;d[j].i1=d[j-1].i1;d[j-1].i1=m;	
             m=d[j].i2;d[j].i2=d[j-1].i2;d[j-1].i2=m;
             m=d[j].j1;d[j].j1=d[j-1].j1;d[j-1].j1=m;
             m=d[j].k1;d[j].k1=d[j-1].k1;d[j-1].k1=m;
             m=d[j].j2;d[j].j2=d[j-1].j2;d[j-1].j2=m;
             m=d[j].k2;d[j].k2=d[j-1].k2;d[j-1].k2=m;
		   }
        }
	}
}	
	

