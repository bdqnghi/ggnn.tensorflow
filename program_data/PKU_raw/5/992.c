int main()
{
	char x[1000],y[1000];
	int i,lengthx,lengthy,same=0;
	float rate,a;
	scanf("%f",&rate);
	scanf("%s %s",x,y);
	lengthx=strlen(x);
	lengthy=strlen(y);
	if(lengthx!=lengthy)printf("error\n");
	else
	{
		for(i=0;i<lengthx;i++)
		{
			if((x[i]!='A'&&x[i]!='G'&&x[i]!='C'&&x[i]!='T')||(y[i]!='A'&&y[i]!='G'&&y[i]!='C'&&y[i]!='T'))
				break;
		}
		if(i<lengthx-1)printf("error\n");
		else
		{
	       for(i=0;i<lengthx;i++)
		       if(x[i]==y[i])same++;
	       a=(float)same/(float)lengthx;
	       if(a>rate)printf("yes\n");
	       else printf("no\n");
		}
	}
	return 0;
}