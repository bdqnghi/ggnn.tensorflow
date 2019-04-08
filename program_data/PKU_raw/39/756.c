int main ()
{
	char name[100][30];
	int n,i,totle=0,m,mast=0;
	int s[100][4];
	char x;
	char g;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		s[i][3]=0;
		scanf("%s%d%d %c %c%d",name[i],&s[i][0],&s[i][1],&g,&x,&s[i][2]);
		if(s[i][0]>80){
			if(s[i][2]!=0){
				s[i][3]=s[i][3]+8000;
			}
		}
		if(s[i][0]>85){
			if(s[i][1]>80){
				s[i][3]=s[i][3]+4000;
			}
			if(x=='Y'){
				s[i][3]=s[i][3]+1000;
			}
		}
		if(s[i][0]>90){
			s[i][3]=s[i][3]+2000;
		}
		if(s[i][1]>80&&g=='Y'){
			s[i][3]=s[i][3]+850;
		}
		if(s[i][3]>mast){
			mast=s[i][3];
			m=i;
		}
		totle=totle+s[i][3];
	}
	printf("%s",name[m]);
	printf("\n%d\n%d",mast,totle);
	return 0;
}