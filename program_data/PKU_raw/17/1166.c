int main()
{
	for(;;){
		char a[101]={0},b[101]={0};
		int n,t,s,i;
		if(scanf("%s",a)==EOF) break;
		n=strlen(a);
		for(i=0;i<n;i++)
			if(a[i]=='(')b[i]=1;
			else if(a[i]==')')b[i]=-1;
		for(i=0,s=0;i<n;i++)
				if(b[i]==1){t=i;s=1;}
				else if(b[i]==-1&&s==1){b[t]=0;b[i]=0;i=-1;s=0;}
		for(i=0;i<n;i++)
			if(b[i]==1)b[i]='$';
			else if(b[i]==-1)b[i]='?';
			else b[i]=' ';
			for(i=0;i<n;i++)
	           printf("%c",a[i]);
			printf("\n");
			for(i=0;i<n;i++)
	           printf("%c",b[i]);
			printf("\n");
	}
}
