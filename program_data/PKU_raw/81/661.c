
int main()  {
int i,j,n,t=0,m,k1,k2,k3,k4,k5,k=0;
int a[6][6];

for(i=0;i<5;i++){
	for(j=0;j<5;j++){
		scanf("%d",&a[i][j]);
	}
}
scanf("%d%d",&n,&m);

for(i=0;i<5;i++){
	for(j=0;j<5;j++){
		if(a[i][j]==n)  {t++;k2=i;break;}
	}
	if(t==1)  {break;}
}
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
		if(a[i][j]==m)  {k++;k3=i;break;}
	}
	if(k==1)  {break;}
}
if(k2!=k3&&t==1&&k==1)   {
k1=a[n][0];a[n][0]=a[m][0];a[m][0]=k1;
k1=a[n][1];a[n][1]=a[m][1];a[m][1]=k1;
k1=a[n][2];a[n][2]=a[m][2];a[m][2]=k1;
k1=a[n][3];a[n][3]=a[m][3];a[m][3]=k1;
k1=a[n][4];a[n][4]=a[m][4];a[m][4]=k1;
for(j=0;j<4;j++){
		printf("%d ",a[0][j]);
	}
printf("%d\n",a[0][4]);

for(j=0;j<4;j++){
		printf("%d ",a[1][j]);
	}
printf("%d\n",a[1][4]);

for(j=0;j<4;j++){
		printf("%d ",a[2][j]);
	}
printf("%d\n",a[2][4]);

for(j=0;j<4;j++){
		printf("%d ",a[3][j]);
	}
printf("%d\n",a[3][4]);

for(j=0;j<4;j++){
		printf("%d ",a[4][j]);
	}
printf("%d\n",a[4][4]);


}
else {printf("error");}
return 0;
}