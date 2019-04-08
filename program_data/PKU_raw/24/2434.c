void f(char c[],char a[],int a1,int a2)
{
	int i;
	for(i=a1;i<=a2;i++) c[i-a1]=a[i];
}//copy
main()
{
	int n=0,i,max,min,l[200],length,d[201]={0};
	char a[10000],c[200][30]={0},maxc[30]={0},minc[30]={0};
	gets(a);
	length=strlen(a);
	for(i=1;i<length;i++) {if((a[i]==' '||a[i]==',')&&a[i-1]!=' '&&a[i-1]!=',') d[++n]=i;}//n+1 ge danci qie ge d1-dn
	if(n==0) f(c[0],a,0,length-1);
	else { f(c[0],a,0,d[1]-1);for(i=1;i<n;i++) f(c[i],a,d[i]+1,d[i+1]-1); f(c[n],a,d[n]+1,length);}

	for(i=0;i<=n;i++) l[i]=strlen(c[i]);
    max=l[0];
    min=l[0];
    strcpy(maxc,c[0]);
    strcpy(minc,c[0]);
	for(i=1;i<=n;i++) 
	{
		if(l[i]>max) {max=l[i];strcpy(maxc,c[i]);}
		else if(l[i]<min) {min=l[i];strcpy(minc,c[i]);}
	}
	printf("%s\n%s\n",maxc,minc);
}