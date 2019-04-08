
int n;
int x[1000],y[1000];

int myCmp(const void *a,const void *b){
	return *(int*)b - *(int*)a;
}

int main(){
	int i;
	int *hx,*hy,*rx,*ry;/* h=head, r=rear */
	int win;

	scanf("%d",&n);
	while(n){
		win = 0;

		for(i=0;i<n;i++)
			scanf("%d",&x[i]);
		for(i=0;i<n;i++)
			scanf("%d",&y[i]);

		qsort(x,n,sizeof(int),myCmp);
		qsort(y,n,sizeof(int),myCmp);

		hx = &x[0];
		hy = &y[0];
		rx = &x[n-1];
		ry = &y[n-1];

		while(hx<=rx){
			if(*hx!=*hy){
				if(*hx>*hy){
					win++;
					hx++;
					hy++;
				}
				else{
					win--;
					rx--;
					hy++;
				}
			}
			else if(*rx!=*ry){
				if(*rx>*ry){
					win++;
					rx--;
					ry--;
				}
				else{
					win--;
					rx--;
					hy++;
				}
			}
			else{
				win += *rx<*hy ? -1 : 0;
				rx--;
				hy++;
			}
		}

		printf("%d\n",win*200);
		scanf("%d",&n);
	}

	return 1;
}