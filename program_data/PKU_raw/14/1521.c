
struct student{
	int a;
	int b;
	int c;//?????????????
};

int main(int argc, char* argv[])
{
	int n,i,j,temp,temp2,sum=0;
	int max1,max2,max3,id1,id2,id3;
	scanf("%d",&n);
	struct student*s=(struct student*)malloc(n*sizeof(struct student));
	int*end=(int*)malloc(n*sizeof(int));//??????????????????????
	for(i=0;i<n;i++){
		scanf("%d %d %d",&s[i].a,&s[i].b,&s[i].c);
		end[i]=s[i].b+s[i].c;
	}
	max1=-100;max2=-100;max3=-100;
	id1=s[0].a;	id2=s[0].a;	id3=s[0].a;
	for(i=0;i<n;i++)
		if(end[i]>max1){
		max1=end[i];
		id1=s[i].a;
		}//?????
	for(i=0;i<n;i++)
		if(end[i]!=max1&&end[i]>max2){
			max2=end[i];
			id2=s[i].a;
		}//?????
	for(i=0;i<n;i++)
		if(end[i]!=max1&&end[i]!=max2&&end[i]>max3){
			max3=end[i];
			id3=s[i].a;
		}//???????(????????????????????????????????)

	for(i=0;i<n;i++){
		if(end[i]==max1){
			printf("%d %d\n",s[i].a,max1);
			sum++;
		}
	}
	for(i=0;i<n;i++){
		if(sum<=2&&end[i]==max2){
			printf("%d %d\n",s[i].a,max2);
			sum++;
		}
	}
	for(i=0;i<n;i++){
		if(sum<=2&&end[i]==max3){
			printf("%d %d\n",s[i].a,max3);
		}
	}//???????????????????????
		
	free(s);
	free(end);

	return 0;
}

