void main()
{
	int a,b,c,d,e,f,g;
	char num1[101],num2[101],r[101];
	scanf("%d",&a);
	g=1;
	while(g<=a)
	{
	scanf("%s",&num1);scanf("%s",&num2);
	printf("\n");
	b=strlen(num1)-1;c=strlen(num2)-1;e=b;
	while(c>=0){
		if(num1[b]>=num2[c])
			r[b]=num1[b]-num2[c]+'0';
		else {num1[b]+=10;d=b-1;
		while(num1[d]=='0')
		{ num1[d]='9';d--;
		}
		num1[d]-=1;
		r[b]=num1[b]-num2[c]+'0';
		}b--;c--;
	}
	while(b>=0)
	{r[b]=num1[b];
	b--;
	}
	for(f=e;f>=0;f--)
		printf("%c",r[e-f]);
	printf("\n");
	g++;
	}
}