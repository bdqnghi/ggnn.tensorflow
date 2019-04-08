int main()
{
	int n,x,y,c,b,sum=0,i,a[10][10];
	scanf("%d",&n);
    for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			scanf("%d",&a[x][y]);
		}
	}
	for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			if(a[x][y]==0){
				b=y;
				break;
			}
		}
	}
    for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			if(a[x][y]==0){
				c=y;
				sum++;
			}
		}
	}
    i=(sum-2*(c-b-1))/2*(c-b+1)-sum;
	printf("%d",i);
	return 0;
}