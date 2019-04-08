void main()
{
	char c1[50],c2[50];
	int num1[300]={0},i,num2[300]={0},k1,k2,p;
	scanf("%s",c1);
	scanf(" ");
	scanf("%s",c2);
	k1=strlen(c1);
	k2=strlen(c2);
	if(k1!=k2)  printf("NO");
	else if(k1==k2)
	{
 	for(i=0;i<k1;i++)
	{
		num1[c1[i]]=num1[c1[i]]+1;
		num2[c2[i]]=num2[c2[i]]+1;
	}
	p=0;
	for(i=0;i<300;i++)
	{
		if(num1[i]!=num2[i]) p=1;
	}
	if(p==0) printf("YES");
	else if(p==1)  printf("NO");
	}
}
