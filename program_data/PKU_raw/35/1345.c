int main()
{
	int x,y,a[100][100],row,col,b[10],c[10],d[10],e[10],i=0;
	scanf("%d,%d",&row,&col);
	for(x=0;x<row;x++){
		for(y=0;y<col;y++){
			scanf("%d",&a[x][y]);}
	}
	for(x=0;x<row;x++){
		for(y=0;y<col;y++){
			if(y==0){
				b[x]=a[x][y];
				c[x]=x;}
			else if(a[x][y]>b[x]){
				b[x]=a[x][y];
				c[x]=x;}
		}
	}
    for(y=0;y<col;y++){
	    for(x=0;x<row;x++){
		if(x==0){
			d[y]=a[x][y];
			e[y]=y;}
		else if(a[x][y]<d[y]){
				d[y]=a[x][y];
				e[y]=y;}
		}
	}
    for(x=0;x<row;x++){
		for(y=0;y<col;y++){
			if(b[x]==d[y]){
				i=1;
				printf("%d+%d",c[x],e[y]);}
	}
	}
		if(i==0)
			printf("No");
		return 0;
}