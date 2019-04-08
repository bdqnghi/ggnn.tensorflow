/* Note:Your choice is C IDE */

int change( char *as, int *a)
{int len,i;
	len=(int)strlen(as);
	for(i=0;i<len;i++)
	a[len-i-1]=as[i]-'0';
	return len;} 
 
void bigprint(int *a,int len)
{int k=len-1;
	int i;
	while(a[k]==0&&k>0){k--;}
	for(i=k;i>=0;i--)
	printf("%d",a[i]);}

int add(int *a,int lena,int *b,int lenb,int *c)
{int i;
	int len=(lena>lenb)?lena:lenb;
	for(i=0;i<len;i++)
	{c[i]=0;
		if(i<lena)c[i]+=a[i];
		if(i<lenb)c[i]+=b[i];}
	c[len]=0;
	for(i=0;i<len;i++)
	{if (c[i]>=10){
		c[i+1]+=c[i]/10;
		c[i]%=10;
	}
}return c[len]?(len+1):len;}


void main()
{int a[250],b[250],c[251],lena,lenb,lenc;
    char as[250],bs[250];
    scanf("%s",as);
    scanf("%s",bs);
    lena=change(as,a);
    lenb=change(bs,b);
    lenc=add(a,lena,b,lenb,c);
   bigprint(c,lenc);

}