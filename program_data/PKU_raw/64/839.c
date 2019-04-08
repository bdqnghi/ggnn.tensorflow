
typedef struct point {
    int x,y,z;
}POINT;

typedef struct disdence {
    POINT a,b;
    double dst;
}PD;

double Squ(double num) {
    return num * num;
}

double Distance(POINT a,POINT b) {
    return sqrt(Squ(a.x - b.x) + Squ(a.y - b.y) + Squ(a.z - b.z));
}

int main() {
    POINT pt[10];
    PD tmp,dst[45];
    int i,j,k,n,N;
    //printf("???? : ");
    scanf("%d",&n);
    if(n > 10) n = 10;
    N = n*(n - 1)/2;
    for(i = 0;i < n;i++) {
        //printf("?%d : ",i + 1);
        scanf("%d %d %d",&pt[i].x,&pt[i].y,&pt[i].z);
    }
    k = 0;
    for(i = 0;i < n - 1;i++) {  /*???????*/
        for(j = i + 1;j < n;j++) {
            dst[k].a = pt[i];
            dst[k].b = pt[j];
            dst[k].dst = Distance(pt[i],pt[j]);
            k++;
        }
    }
	for(i = 0;i < N- 1;i++)
		for(j = 0;j < N -i -1;j++ )
			if(dst[j].dst < dst[j + 1].dst){
				tmp = dst[j];
				dst[j] = dst[j +1];
				dst[j + 1] = tmp;
			}

	//cout << N << endl;
      /* for(i = 0;i < N - 1;i++) {//?????????
        k = i;
        for(j = i + 1;j < N;j++) {
            if(dst[k].dst <= dst[j].dst)
                k = j;
        }
        if(k != i) {
            tmp = dst[k];
            dst[k] = dst[i];
            dst[i] = tmp;
        }
    }*/
	      
    for(i = 0; i < N; i++) {
        printf("(%d,%d,%d)-",dst[i].a.x,dst[i].a.y,dst[i].a.z);
        printf("(%d,%d,%d)=",dst[i].b.x,dst[i].b.y,dst[i].b.z);
        printf("%.2lf\n",dst[i].dst);
    }
       return 0;
}