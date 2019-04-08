int main(){
char s[256];
int n,i,j;
scanf("%d",&n);getchar();
 for(j=0;j<n;j++){ 
	gets(s);
    for(i=0;i<strlen(s);i++){
         if(s[i]=='T'){printf("A");}
         if(s[i]=='A'){printf("T");}
         if(s[i]=='G'){printf("C");}
         if(s[i]=='C'){printf("G");}
	}
 printf("\n");
 }
return 0;
}