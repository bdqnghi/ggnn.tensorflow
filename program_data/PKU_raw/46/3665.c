int main(){
 int a[100][100]={0},h,l,k,j;
scanf("%d%d",&h,&l);
for(k=0;k<h;k++){
 for(j=0;j<l;j++)
scanf("%d",&a[k][j]);
}
int ph=0,pl=0;
printf("%d\n",a[ph][pl]);
a[ph][pl]=0;int cs=h*l;
for(int z=1;z<cs;z++){
    if((ph==0||a[ph-1][pl]==0)&&a[ph][pl+1]!=0){
	   pl=pl+1;
	   printf("%d\n",a[ph][pl]);
	   a[ph][pl]=0;
	}
    else if((pl==l-1||a[ph][pl+1]==0)&&a[ph+1][pl]!=0){
		ph=ph+1;
		printf("%d\n",a[ph][pl]);
		a[ph][pl]=0;
	}
    else if(a[ph+1][pl]==0&&pl!=0&&a[ph][pl-1]!=0){
		pl=pl-1;
		printf("%d\n",a[ph][pl]);
		a[ph][pl]=0;
	}
    else if((a[ph][pl-1]==0||ph==0)&&a[ph-1][pl]!=0){
		ph=ph-1;
		printf("%d\n",a[ph][pl]);
		a[ph][pl]=0;
	}
    else break;
}
return 0;
}