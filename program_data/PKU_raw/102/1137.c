int main(){
	int all,count1,count2,i,p;
	double h1[40],h2[40],h,ex;
	char input[6];
	scanf("%d",&all);
	count1=0;count2=0;
	for(i=0;i<all;i++){
		scanf("\n%s %lf",input,&h);
		if(input[0]=='m'){h1[count1]=h;count1++;}
		if(input[0]=='f'){h2[count2]=h;count2++;}

	}
	for(i=0;i<count1;i++){
		for(p=0;p<count1-1;p++){
			if(h1[p]>h1[p+1]){
				ex=h1[p+1];
				h1[p+1]=h1[p];
				h1[p]=ex;
			}
		}
	}
	for(i=0;i<count2;i++){
			for(p=0;p<count2-1;p++){
				if(h2[p]<h2[p+1]){
					ex=h2[p+1];
					h2[p+1]=h2[p];
					h2[p]=ex;
				}
			}
		}
	printf("%.2lf",h1[0]);
	for(i=1;i<count1;i++){printf(" %.2lf",h1[i]);}
	for(i=0;i<count2;i++){printf(" %.2lf",h2[i]);}

	
	
return 0;
}