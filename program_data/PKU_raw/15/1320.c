
int main()
{
	int e,f=0,g[1000];

	int n;
	scanf("%d",&n);

	int i=0;
	while(i<n){
		int k=0;while(k<n){
            scanf("%d",&e);
			if(e==0){
				f++;
			}
			k++;
		}
		
		g[i]=f;
		f=0;
		i++;
	}

	int m=0,x,y;
	int j=0;while(j<n){
        if(g[j]>m){
			m = g[j];
		}
		if(g[j]==0&&g[j+1]!=0){
			x = j;
		}
		if(g[j]!=0&&g[j+1]==0){
			y = j;
		}
		j++;
	}

	int d,sum;
	d = y - x;
	sum = (m-2)*(d-2);
	printf("%d\n",sum);
    return 0;
}
