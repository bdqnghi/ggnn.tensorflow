static int i=0,a2[2][101];

int f(char s[],char a,char b,int n)
{
	int j,k,e,flag2=0;
	for(j=0;j<n;j++)
		if(s[j]!=' ') {flag2=1;break;}//??????????
	if(flag2==0) return 0;//?????????????
	
	for(j=0;j<n-1;j++)
		if(s[j]==a){
		for(k=j+1;k<n;k++)
		if(s[k]==b) 
		{
			if(k==j+1)	{a2[0][i]=j; a2[1][i]=k; s[j]=' '; s[k]=' ';i++;break;}
			else{
			int flag=0;
			for(e=j+1;e<k;e++)
			{
			    if(s[e]!=' ') {flag=1;break;}
			}
			if(flag==0)	{a2[0][i]=j; a2[1][i]=k; s[j]=' '; s[k]=' ';i++;break;}}
		}}
    f(s,a,b,n);
}

void main()
{
	char s1[101],a1,b1;
	int l,t,qqq,l1,x,y,temp;
	scanf("%s",s1);//???????
	l=strlen(s1);//???????
	a1=s1[0];//?a1????
    for(t=0;t<l;t++)
		if(s1[t]!=a1) {b1=s1[t];break;}//?b1????
	qqq=f(s1,a1,b1,l);
	l1=l/2;
    for(x=1;x<=l1-1;x++)
		for(y=0;y<l1-x;y++)
		{
			if(a2[1][y]>a2[1][y+1]) {temp=a2[1][y];a2[1][y]=a2[1][y+1];a2[1][y+1]=temp;temp=a2[0][y];a2[0][y]=a2[0][y+1];a2[0][y+1]=temp;}
		}
    for(t=0;2*t<l;t++)
		printf("%d %d\n",a2[0][t],a2[1][t]);
}