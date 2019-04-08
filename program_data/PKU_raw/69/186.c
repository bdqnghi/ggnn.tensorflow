void main()
{
	int a,b,c,i,j,k,sign,m,counter,p,x;
	char s1[251],s2[251];
	char s[252]={0};
	scanf("%s",s1); scanf("%s",s2);
	sign=1; counter=0;x=1;
	a=strlen(s1); b=strlen(s2);
	for(i=a-1,j=b-1,k=0;i!=0||j!=0||sign!=0;i--,j--,k++)
	{ 
		m=s1[i]+s2[j]+counter-48;
		if(m<58) {s[k]=m;counter=0;}
		else {s[k]=m-10;counter=1;}

		if(i==0&&j!=0) {i++;s1[0]='0';}
		else if(i!=0&&j==0) {j++;s2[0]='0';}
		else if(i==0&&j==0&&counter==0) {i++;j++;s2[0]='0';s1[0]='0';sign=0;}
		else if(i==0&&j==0) {i++;j++;s2[0]='0';s1[0]='0';}
	} 
	c=strlen(s);
	for(p=c-1;p>=0;p--)
	{   
		if(s[p]==48&&x==1) continue; 
		printf("%c",s[p]); x=0;
	}
	if(x==1) printf("0");
	printf("\n");
}