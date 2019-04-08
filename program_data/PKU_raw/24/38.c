int main()
{
	char s[1000];
	int max=0,min=50,sp[100],i,j,k,lg[100],count=0,len;
	gets(s);
len=strlen(s);
for(i=0;i<len;i++)
	if(*(s+i)==' ') {++count;sp[count]=i;}
*(sp+count+1)=len;
*sp=-1;
*lg=0;
for(i=1;i<=count+1;++i)
	lg[i]=sp[i]-sp[i-1]-1;
for(i=1;i<=count+1;++i)
{
	if(max<*(lg+i)) {max=lg[i];k=i;}
	if(min>*(lg+i)) {min=lg[i];j=i;}
}
for(i=sp[k-1]+1;i<sp[k];++i)
	printf("%c",*(s+i));
	printf("\n");
for(i=sp[j-1]+1;i<sp[j];++i)
printf("%c",*(s+i));
        return 0;
}