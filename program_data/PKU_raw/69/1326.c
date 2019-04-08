int xa[300],xb[300],xx[300];
char a[300],b[300];
int main(){
    int lena,lenb,len,i;
    gets(a);
    gets(b);
    lena=0;
        for(i=0;i<=250;i++){
        xa[i]=0;
        xb[i]=0;
        xx[i]=0;
    }
    while(a[lena]!='\0'){
        xa[lena]=a[lena]-'0';
        lena++;
    }
    lenb=0;
    while(b[lenb]!='\0'){
        xb[lenb]=b[lenb]-'0';
        lenb++;
    }
    for(i=0;i<lena/2;i++){
        int temp=xa[i];xa[i]=xa[lena-i-1];xa[lena-i-1]=temp;
    }
    for(i=0;i<lenb/2;i++){
        int temp=xb[i];xb[i]=xb[lenb-i-1];xb[lenb-i-1]=temp;
    }
    if(lena>lenb)len=lena;else len=lenb;
    int x=0;
    for(i=0;i<len;i++){
        x=x+xa[i]+xb[i];
        xx[i]=x %10;
        x=x/10;
    }
    xx[len]=x;
    while(xx[len]==0 && len >0)len--;
    for(i=len;i>=0;i--)printf("%d",xx[i]);
    printf("\n");
    return 0;
}
