
int main (){
	int count1,count2,all,i,p;
	double height1[40],height2[40],exchange,preheight;
	char input[7];
	scanf("%d",&all);
	count1=0;
	count2=0;
	for(i=0;i<all;i++){
		scanf("%s",input);
		scanf("%lf",&preheight);
		if(strlen(input)==4){height1[count1]=preheight;count1++;}
		if(strlen(input)==6){height2[count2]=preheight;count2++;}
	}
	for(i=0;i<count1;i++){	for(p=0;p<count1-1;p++){if(height1[p]>height1[p+1]){exchange=height1[p];height1[p]=height1[p+1];height1[p+1]=exchange;}}}
	for(i=0;i<count2;i++){	for(p=0;p<count2-1;p++){if(height2[p]<height2[p+1]){exchange=height2[p];height2[p]=height2[p+1];height2[p+1]=exchange;}}}
	printf("%.2lf",height1[0]);
	for(i=1;i<count1;i++){printf(" %.2lf",height1[i]);}
	for(i=0;i<count2;i++){printf(" %.2lf",height2[i]);}





	

return 0;
}