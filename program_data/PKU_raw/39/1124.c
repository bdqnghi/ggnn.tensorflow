int main()
{
	int a[200],n,s[200][20],b[200],e[200],i,m[200],t=0,j,k=0,h=0;
	char d[200],c[200],f,g;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%d%d%c%c%c%c%d",s[i],&a[i],&b[i],&f,&c[i],&g,&d[i],&e[i]);
	}
for(i=0;i<n;i++){
	    m[i]=0;
		if(a[i]>80&&e[i]>0)   m[i]+=8000;
        if(a[i]>85&&b[i]>80)   m[i]+=4000;
        if(a[i]>90)           m[i]+=2000;
        if(a[i]>85&&d[i]=='Y')   m[i]+=1000;
        if(b[i]>80&&c[i]=='Y')   m[i]+=850;
}
for(i=0;i<n;i++){
	h+=m[i];
    if(m[i]>t) {
	t=m[i];
	j=i;}
}

 printf("%s\n%d\n%d\n",s[j],t,h);
  return 0;
}
