int main(){
int num,im,jm,tm,len;
scanf("%d",&num);
char zfc[num][21];
    for(im=0;im<num;im++){
        tm=0;
        scanf("%s",zfc[im]); 
        len=strlen(zfc[im]);
        if((zfc[im][0]>='a'&&zfc[im][0]<='z')||(zfc[im][0]>='A'&&zfc[im][0]<='Z')||(zfc[im][0]=='_')){
        for(jm=1;jm<len;jm++){
            if((zfc[im][jm]>='a'&&zfc[im][jm]<='z')||(zfc[im][jm]>='A'&&zfc[im][jm]<='Z')||(zfc[im][jm]>='0'&&zfc[im][jm]<='9')||(zfc[im][jm]=='_')){} else {tm++;break;}
        } 
        if(tm==0){printf("yes\n");} else {printf("no\n");}
        } else {printf("no\n");}
    }
return 0;
}


