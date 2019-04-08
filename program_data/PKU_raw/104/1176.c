

int main(int argc, char* argv[])
{
	int x[10]={0},y[10]={0},i,j,indicator=0;
	scanf("%d%d",&x[0],&y[0]);
	for(i=0;;i++){
		if(x[i]==1)break;
		if(x[i]%2==0) x[i+1]=x[i]/2;
		else x[i+1]=(x[i]-1)/2;
	}
	for(i=0;;i++){
		if(y[i]==1)break;
		if(y[i]%2==0) y[i+1]=y[i]/2;
		else y[i+1]=(y[i]-1)/2;
	}
	for(i=0;i<10;i++){
		if(x[i]!=0)
		for(j=0;j<10;j++){
			if((y[j]!=0)&&(x[i]==y[j])){
				printf("\n%d",x[i]);
				indicator=1;
			}
			if(indicator==1)break;
		}
		if(indicator==1)break;
	}
	return 0;
}