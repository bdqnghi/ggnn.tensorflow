struct ID{
	char idnum[100];
	int old;
};
int main(){
struct ID ido[100];//???????
struct ID idy[100];//???????
struct ID id[100];//???????
struct ID e;
int n,i,a=0,b=0,j,l,k;
scanf("%d",&n);
for(i=0;i<n;i++){
                         scanf("%s %d",id[i].idnum,&(id[i].old));
                         if(id[i].old>=60){//????60 ????????????????
                                              strcpy(ido[a].idnum, id[i].idnum);
                                              ido[a].old=id[i].old;
                                              a++;
                          }else {//?????????????????
                                 strcpy(idy[b].idnum, id[i].idnum);
                                 idy[b].old=id[i].old;
                                 b++;
            }
}

for(k = 1 ; k <= a ; k++){//?????????
	for(i = 0; i < a - k; i++){
			if(ido[i].old < ido[i+1].old){
					e = ido[i+1];
					ido[i+1] = ido[i];
				    ido[i] = e;
			}
	}
}

for(j=0;j<a;j++){//????
	printf("%s\n",ido[j].idnum);
}
for(l=0;l<b;l++){
	printf("%s\n",idy[l].idnum);
}

return 0;
}
