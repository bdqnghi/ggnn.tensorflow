int main(){
 int n,i,c,g;
 char a[20][21];
 scanf("%d",&n);
 for(i=0;i<=n-1;i++){
  scanf("%s",a[i]);
 }
 for(c=0;c<=n-1;c++){
   if((a[c][0]<65)||(a[c][0]>90&&a[c][0]<95)||(a[c][0]==96)||(a[c][0]>122)){
     puts("no");
	 continue;
	}else{
   for(g=0;g<strlen(a[c]);g++){
    if((a[c][g]<48)||(a[c][g]>57&&a[c][g]<65)||(a[c][g]>90&&a[c][g]<95)||(a[c][g]==96)||(a[c][g]>122)){
    puts("no");
	break;
    }
    if((g==strlen(a[c])-1)&&((a[c][g]==95)||(a[c][g]>=65&&a[c][g]<=90)||(a[c][g]>=97&&a[c][g]<=122)||(a[c][g]>=48&&a[c][g]<=57))){
    puts("yes");
	}
   }
  }
 }
 return 0;
}