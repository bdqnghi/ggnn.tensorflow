int main(){
int tt[100][100];
int r,c;
scanf("%d%d",&r,&c);
for(int x=0;x<r;x++){
	for(int y=0;y<c;y++){
        scanf("%d",&tt[x][y]);
	}
}
int i1=0,i2=c-1,i3=r-1,i4=0,m1=0,m2=1,m3=c-2,m4=r-2,n1=c-1,n2=r-1,n3=0,n4=1,j,s=0,a=1;
while(1){
for(j=m1;j<=n1&&a==1;j++){
	printf("%d\n",tt[i1][j]);
    s+=1;
	if(s==r*c){a=0;}
}
m1++;n1--;i1++;
for(j=m2;j<=n2&&a==1;j++){
	printf("%d\n",tt[j][i2]);
    s+=1;
	if(s==r*c){a=0;}
}
m2++;n2--;i2--;
for(j=m3;j>=n3&&a==1;j--){
	printf("%d\n",tt[i3][j]);
    s+=1;
	if(s==r*c){a=0;}
}
m3--;n3++;i3--;
for(j=m4;j>=n4&&a==1;j--){
	printf("%d\n",tt[j][i4]);
    s+=1;
	if(s==r*c){a=0;}
}
m4--;n4++;i4++;
if(a==0){break;}
}
return 0;
}