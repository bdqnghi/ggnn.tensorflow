int c[202],aa[200],bb[200];
int main ()
{
	int add(char *a,char *b);
	char a[200],b[200];
	int cclen,j;
	gets(a);
	gets(b);
	cclen=add(a,b);
	for(j=cclen;j>=0;j--){
      printf("%d",c[j]);
       }
}
int add(char *a,char *b)
{
	int i,k,len;
	int alen=strlen(a);
	int blen=strlen(b);
	len=(alen>blen)? alen:blen;
	k=0;	
	for(i=alen-1;i>=0;i--){
        aa[k]=a[i]-'0';
        k++;      
        }
    k=0;
    for(i=blen-1;i>=0;i--){
        bb[k]=b[i]-'0';
        k++;      
        }
    c[0]=0;
    for(i=0;i<len;i++){
        if(i<alen) c[i]+=aa[i];
        if(i<blen) c[i]+=bb[i];
    }
    for(i=0;i<len;i++){
        c[i+1]+=c[i]/10;
        c[i]=c[i]%10;
        }
    k=len;
    for(i=len;i>0;i--){
       if(c[i]==0)
       k--;
       else
       break;
       }  
    return k;  
}







