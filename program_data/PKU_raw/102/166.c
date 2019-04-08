int cmp(const void *a,const void *b)
{	
	int r;
	if((*(float *)a)-(*(float *)b)<0)
		r=-1;
	else if((*(float *)a)-(*(float *)b)==0)
			r=0;
	else r=1;
	return r;
}
int cmp2(const void *a,const void *b)
{	
	int r;
	if(*(float *)a-*(float *)b>0)
		r=-1;
	else if(*(float *)a-*(float *)b==0)
			r=0;
		else r=1;
	return r;
}
int main()
{
	int n,i,x=0,y=0;
	float h;
	char temp[10];
	char sex[2][10]={"male","female"};
	float height[2][40];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %f",temp,&h);
		if(strcmp(temp,sex[0])==0){
			height[0][x]=h;
			x++;
		}
		else {
			height[1][y]=h;
			y++;
		}		
	}
	qsort(height[0],x,sizeof(float),cmp);
	qsort(height[1],y,sizeof(float),cmp2);
	for(i=0;i<x;i++)
		printf("%.2f ",height[0][i]);
	for(i=0;i<y;i++){
		if(i!=y-1)
			printf("%.2f ",height[1][i]);
		else  printf("%.2f",height[1][i]);
	}
	return 0;
}