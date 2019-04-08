int main()
{int sz[5][5],m,n,e,row,col;
for( row=0;row<5;row++){
for( col=0;col<5;col++){
scanf("%d",&sz[row][col]);}
}
scanf("%d%d",&m,&n);
if(m<5&&n<5){
	for(int col=0;col<5;col++){
		e=sz[m][col];
		sz[m][col]=sz[n][col];
		sz[n][col]=e;
}
}
if(m<5&&n<5){for( row=0;row<5;row++){
for( col=0;col<5;col++){
printf("%d",sz[row][col]);if(col<4){printf(" ");}}

printf("\n");
}}
if(m>4||n>4){printf("error");}
return 0;
}

