
int shulie(int a[]){
	int i,x1=0;
	for(i=9;i>=0;i--){
        a[i]=a[i+1]/2;
		if(a[i]!=0) x1=i;
	}
	return x1;
}

void main()
{
	int x[11]={0},y[11]={0},i=0,x1,y1;
	scanf("%d%d",&x[10],&y[10]);
	if(x[10]==1 || y[10]==1) printf("1");
    else
	{
		{x1=shulie(x);
	     y1=shulie(y);
	     for(i=0;i<11;i++){
		      if(x[x1]!=y[y1]) {printf("%d",x[x1-1]);break;}
		      else {x1++;
		            y1++;
			        continue;}
	}
	}
	}
}