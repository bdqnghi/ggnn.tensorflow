void main()
{
	char f[1000],b[1000];
	int c[1000]={0};
	int q,k,i,ff,j,t,max,max2;
	gets(f);
	b[0]=-1;
	k=strlen(f);q=1;
	for(i=0;i<k;i++){
		if(f[i]==',')
		{b[q]=i;q++;}
	}
	b[q]=k;
	if(q==1)printf("No");
	else{
	for(i=0;i<q;i++){
		for(j=b[i]+1;j<b[i+1];j++){
			t=f[j]-'0';
			c[i]=c[i]*10+t;
		}
	}
	max=c[0];
	for(i=0;i<q;i++){
		if(c[i]>max)max=c[i];
	}
	for(i=0;i<q;i++){
		if(c[i]!=max){ff=1;break;}
	}

	max2=-10000;
	for(i=0;i<q;i++){
		if(c[i]>max2&&c[i]!=max)max2=c[i];
	}
	if(max2==-10000){printf("No");}
	else
	printf("%d",max2);
	
	}
}