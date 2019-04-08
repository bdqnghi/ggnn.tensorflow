int main()
{int a,b,i,j,c,d,e,k,s=0;
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++){
	k=0;
	for(j=2;j<=sqrt(i);j++){
		if(i%j==0){
			k=1;
	break;
		}
	}
	c=i;
	e=0;
	while(c>0)
	{d=c%10;
	e=e*10+d;
	c=c/10;
	}
//	printf("%d %d %d\n",i,e,k);
	if(k==0&&i==e){
		s++;
		if(s==1)
			printf("%d",i);
		else
		printf(",%d",i);
	}
}
if(s==0)
printf("no");
return 0;
}