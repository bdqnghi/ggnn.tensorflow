int main(){
int i,n;
double cd2,cd1,per,szp,s=0;
char zf[501],zf2[501];
scanf("%lf",&per);
scanf("%s",zf);
scanf("%s",zf2);
cd1=strlen(zf);
cd2=strlen(zf2);
if(cd1==cd2){
    for(i=0;i<cd1;i++){
		if(zf[i]=='A'||zf[i]=='T'||zf[i]=='C'||zf[i]=='G'&&zf2[i]=='A'||zf2[i]=='T'||zf2[i]=='C'||zf2[i]=='G'){
			if(zf[i]==zf2[i]){
				s=s+1;}}
		else {printf("error");
		       break;}
            if(i==cd1-1){szp=s/cd1;
                if(szp>per){printf("yes");}
                else{printf("no");}}
	}
}

else{printf("error");}

		return 0;}
