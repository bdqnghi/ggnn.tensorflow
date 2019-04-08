int main(){
	struct man
	{
		char a[11];
		int y;
	}man[100];
	int n;
	scanf("%d",&n);
	char b[11];
	int y;
	int i,j;
	char c[100][11];
	int m=0,k=0;
	for(i=0;i<n;i++){
		scanf("%s%d",b,&y);
		if(y>=60){
			strcpy(man[k].a,b);
			man[k].y=y;
			k++;
		}
		else{
			strcpy(c[m],b);
			m++;
		}
	}
	for(i=1;i<k;i++){
		for(j=0;j<k-i;j++){
			int y1,y2;
			y1=man[j].y;
			y2=man[j+1].y;
			if(y1<y2){
				y=man[j+1].y;
				man[j+1].y=man[j].y;
				man[j].y=y;
				strcpy(b,man[j+1].a);
				strcpy(man[j+1].a,man[j].a);
				strcpy(man[j].a,b);
			}
		}
	}
	for(i=0;i<k;i++){
		strcpy(b,man[i].a);
		printf("%s\n",b);
	}
	for(i=0;i<m;i++){
		strcpy(b,c[i]);
		printf("%s\n",b);
	}
	return 0;
}