main()
{
	int m,n,i,j,k,l1,l2,t,t1[1000],t2[1000];
	int c[1000][1000],x[1000];
	
	char a1[10000],a2[10000];
	gets(a1);
	

	l1=strlen(a1);

	n=0;t=-1;
	for(i=0;i<=l1;i++)
	{ if(a1[i]==','||a1[i]=='\0'){
		n++;
		if(i-t==2) t1[n]=a1[i-1]-'0';
		else if(i-t==3) t1[n]=a1[i-1]-'0'+(a1[i-2]-'0')*10;
		else if(i-t==4) t1[n]=a1[i-1]-'0'+(a1[i-2]-'0')*10+(a1[i-3]-'0')*100;t=i;}
	}

    n=0;t=-1;gets(a2);l2=strlen(a2);
	for(i=0;i<=l2;i++)
	{ if(a2[i]==','||a2[i]=='\0'){n++;
		if(i-t==2) t2[n]=a2[i-1]-'0';
		else if(i-t==3) t2[n]=a2[i-1]-'0'+(a2[i-2]-'0')*10;
		else if(i-t==4) t2[n]=a2[i-1]-'0'+(a2[i-2]-'0')*10+(a2[i-3]-'0')*100;t=i;}
	}

	for(i=0;i<1000;i++) {for(j=0;j<1000;j++) c[i][j]=0;}

	for(i=1;i<=n;i++)  
	{
		for(j=t1[i];j<t2[i];j++) { c[i][j]=1;}
	}

	for(i=1;i<1000;i++) x[i]=0;
	for(i=1;i<1000;i++)
	{ for(j=1;j<=n;j++) {if(c[j][i]==1) x[i]++;}
	}

	m=0;
	for(i=1;i<1000;i++)
		if(x[i]>m) m=x[i];


		printf("%d %d",n,m);
}


	