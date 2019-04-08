void main()
{
	int a,i,j=0,b[3]={0},c=1;
	scanf("%d",&a);
	for(i=0;i<3;i++){c=c+2;if(a%c==0)b[j++]=c;}
	if(b[0]==0)printf("n");
	else {printf("%d",b[0]);for(i=1;i<3;i++)if(b[i]!=0)printf(" %d",b[i]);}
}