int main(int argc, char* argv[])
{  int a[100][15],i=0,j=0,x=10,k=0,m,num=0;
for(i=0;i<100;i++){
	if(x==-1)break;
	for(j=0;j<16;j++){
		scanf("%d",&x);
		if(x==-1)break;
		if(x==0)break;
		a[i][j]=x;
	}

}
k=i;
for(i=0;i<k-1;i++){
	for(j=0;j<15;j++){
		for(m=j+1;m<15;m++){
		if(a[i][j]*1.0/a[i][m]==2||a[i][m]*1.0/a[i][j]==2)num++;
		}
	
	}
	printf("%d\n",num);
	num=0;
}

	return 0;
}
