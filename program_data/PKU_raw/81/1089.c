int a[5][5],m,n;
int f(int x,int y){
	int temp[5],i;
	if(x>4||y>4)return 0;
	else {for(i=0;i<5;i++){
		temp[i]=a[x][i];
		a[x][i]=a[y][i];
		a[y][i]=temp[i];
	}
	return 1;
	}
}
void main()
{
	int i,j,t;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	}
	scanf("%d %d",&m,&n);
	t=f(m,n);
	if(t==0)printf("error\n");
	else for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d%c",a[i][j],j==4?'\n':' ');
		}
	}
}