int main (){
    int i,k,n,m,L,l1,l2;
    char s[300],a[300],b[300];
 scanf("%s",s); scanf("%s",a); scanf("%s",b);
    L=strlen(s); l1=strlen(a); l2=strlen(b);
    n=0;
    for (i=0;i<L;i++){
        if ( a[0]==s[i] ){
             n++;
             for ( k=1; k<l1; k++){
                if(s[i+k]==a[k]){ n++;} else { n=0; break;}
             }
        }if ( n==l1){ break; }
    }for(k=0;k<i;k++){ printf("%c",s[k]); }
    for ( k=0;i!=L&&k<l2;k++){
        printf("%c",b[k]);
    }  for ( k=i+l1;k<L;k++){
        printf("%c",s[k]);
        }
    return 0;
}
