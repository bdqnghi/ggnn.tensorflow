main(){
	char a[101],b[101],c[101];
	char a1[101],a2[101];
	int i,k,l;
	int la,lb,lc;
	cin.getline(a,101);
	cin.getline(b,101);
	cin.getline(c,101);


	lb=strlen(b);
	lc=strlen(c);

	l=0;
    a[-1]=' ';
	for(;;){                   //??????????
    la=strlen(a);
	i=0;

	for (k=l;k<=la-1;k++)       //??????????
     if (a[k]==b[i]){
    	 i++;
    	 if (i==lb && (a[k+1]==' '||a[k+1]=='\0')&& (a[k-lb]==' ')) break;
    	 }
     else  i=0;

    if (k==la) break;

	a1[0]='\0';
	for (i=0;i<=k-lb;i++)         //??
	a1[i]=a[i];
    a1[k-lb+1]='\0';

    a2[0]='\0';
    for (i=0;i<=la-k-2;i++)
	a2[i]=a[k+1+i];
	a2[la-k-1]='\0';

	strcat(a1,c);                 //??
	strcat(a1,a2);
	strcpy(a,a1);


	l=k-lb+1+lc;
	}
	cout<<a<<endl;
    return 0;
}