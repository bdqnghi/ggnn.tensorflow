int main()
{int sz[100][100];
int hang,lie;
scanf("%d %d",&hang,&lie);
for(int a=0;a<hang;a++){
	for(int b=0;b<lie;b++){
	  scanf("%d",&sz[a][b]);
	}
}
int c,d,e,f;
int hs=0,ls=0;
int hz=hang-1,lz=lie-1;
while(hs<=hz&&ls<=lz)
{if(hs!=hz&&lz!=ls)
	{for(c=ls;c<=lz-1;c++){
	  printf("%d\n",sz[hs][c]);
	}
	for(d=hs;d<=hz-1;d++){
	  printf("%d\n",sz[d][lz]);
	}
	for(e=lz;e>=ls+1;e--){
	  printf("%d\n",sz[hz][e]);
	}
    for(f=hz;f>=hs+1;f--){
	  printf("%d\n",sz[f][ls]);
}}

else{for(int m=hs;m<=hz;m++){
	  for(int n=ls;n<=lz;n++){
	    printf("%d\n",sz[m][n]);
	}
}}
	hs++;
	ls++;
	hz--;
	lz--;
}
	
return 0;
}