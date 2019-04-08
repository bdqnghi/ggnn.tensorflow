int main(int argc, char* argv[])
{
	int x,y,i,j=0,max=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d %d",&x,&y);
	if(x<=140&&x>=90&&y<=90&&y>=60){
	j=j+1;
	}else{
		if(j>max){
			max=j;}
	j=0;
	}
	}
	if(j>max){
	printf("%d",j);
	}
	else{
		printf("%d",max);
	}
	return 0;
}