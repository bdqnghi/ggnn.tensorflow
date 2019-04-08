
void sort(int a[],int n); //sort from quick to slow

int main(){
	int i,j,n;
	int tquick,tslow,qquick,qslow;
	int tj[1000],qw[1000];
	int win,lose;
	
	while(1){
		scanf("%d",&n);
		if(n==0)
			break;
		for(i=0;i<n;i++)
			scanf("%d",&tj[i]);
		for(i=0;i<n;i++)
			scanf("%d",&qw[i]);
		win=0;
		tquick=qquick=0;
		tslow=qslow=n-1;
		sort(tj,n);
		sort(qw,n);
		while(n--){
			if(tj[tslow]>qw[qslow])
			{
				tslow--;
				qslow--;
				win++;
			}
			else if(tj[tslow]<qw[qslow])
			{
				qquick++;
				tslow--;
				win--;
			}
			else if(tj[tquick]>qw[qquick])
			{
				qquick++;
				tquick++;
				win++;
			}
			else if(tj[tquick]<qw[qquick])
			{
				tslow--;
				qquick++;
				win--;
			}
			else if(tj[tquick]==qw[qquick])
			{
				if(tj[tslow]<qw[qquick])
				{
					win--;
				}
				tslow--;
				qquick++;
			}
		}
		printf("%d\n",200*win);
	}
	return 0;
}

void sort(int a[],int n){
	int i,j;
	int tmp,max;
	
	for(i=0;i<n-1;i++){
		max=i;
		for(j=i+1;j<n;j++){
			if(a[j]>a[max])
				max=j;
		}
		tmp=a[i];
		a[i]=a[max];
		a[max]=tmp;
	}
}