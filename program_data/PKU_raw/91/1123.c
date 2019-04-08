int main()
{
    int i,n;
	char a[103];
	char b[103];
	for(i=0;i<103;i++){
	    b[i]=0;
		a[i]=0;
	}
	gets(a);
	n=0;
	for(i=0;;i++){
	    if(a[i]!=0) n++;
		else if(a[i+1]==0) break;
		else n++;
	}
	for(i=0;i<n-1;i++){
	    b[i]=a[i]+a[i+1];
	}
	b[n-1]=a[n-1]+a[0];
	for(i=0;i<n;i++){
	    printf("%c",b[i]);
	}
	//printf("%s",b);
	return 0;
}