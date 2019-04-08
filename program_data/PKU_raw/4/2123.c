int main()
{
    int h,l,i,j,k,m=0;
	int a[100][100];
	scanf("%d %d",&h,&l);
	for(i=0;i<h;i++){
		for(j=0;j<l;j++){
		    scanf("%d",&a[i][j]);
		}
	}
	for(k=0,i=0,j=0;;){
	    printf("%d\n",a[j][i]);
		if(i==(l-1)&&j==(h-1)) break;
	    if(i==0||j==(h-1)){
			j=0;
			k++;
			if(k<l){
			i=k;
			}
			else{
			i=l-1;
			m++;
			j=m;
			}
		}
		else{
		    i-=1;
			j+=1;
		}
	}
return 0;
}