int main ()
{
	int dijitian(int,int,int);
	
	int y[200],m1[200],m2[200],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&y[i],&m1[i],&m2[i]);
	}for(int j=0;j<n;j++){
		if((dijitian(y[j],m1[j],1)-dijitian(y[j],m2[j],1))%7==0){
			printf("YES\n");
		}else {
			printf("NO\n");
		}
	}
	return 0;
}
int dijitian(int y,int m,int day)
{
	int d=0;
	for(int k=0;k<m;k++){
		if(k==1||k==3||k==5||k==7||k==8||k==10){
			d+=31;
		}else if(k==4||k==6||k==9||k==11){
			d+=30;
		}else if(k==2){
			if (y%4==0&&y%100!=0 || y%400==0){
				d+=29;
			}else{
				d+=28;
			}
		}
	}
	d+=day;
	return d;
}