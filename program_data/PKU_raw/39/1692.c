int main () {
	long int n,i,k,t,c,j,s=0,max=0,a[800]={0};
	char b[200][500],y,x;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("\n%s %d %d %c %c %d",b[i],&k,&t,&y,&x,&c);
     
	
		if (k>80 && c>0) a[i]+=8000;
        if (k>85 && t>80) a[i]+=4000;
	    if (k>90) a[i]+=2000;
	   	if (k>85 && x=='Y') a[i]+=1000;
	   	if (t>80 && y=='Y') a[i]+=850;
		s+=a[i];
	}
	for (i=0;i<n;i++)
    {
		if (a[i]>max){ 
			max=a[i];
			j=i;}
	}


	printf ("%s\n%d\n%d",b[j],max,s);
	return 0;
}