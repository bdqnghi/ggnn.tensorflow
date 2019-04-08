void main()
{
	int a[10], b[10], c[10],n[10],d,i;
	for(i=0;i<5;i++)
	{
	scanf("%d%d%d",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<5;i++)
	{
	if((a[i]%4==0&&a[i]%100!=0)||a[i]%400==0)
	{
		switch(b[i])
	{
case 1: d=0;break;
case 2: d=31;break;
case 3: d=60;break;
case 4: d=91;break;
case 5: d=121;break;
case 6: d=152;break;
case 7: d=182;break;
case 8: d=213;break;
case 9: d=244;break;
case 10: d=274;break;
case 11: d=305;break;
case 12: d=335;break;
	}
	n[i]=d+c[i];
	printf("%d\n",n[i]);
	}
		else
	{
switch(b[i])
	{
case 1: d=0;break;
case 2: d=31;break;
case 3: d=59;break;
case 4: d=90;break;
case 5: d=120;break;
case 6: d=151;break;
case 7: d=181;break;
case 8: d=212;break;
case 9: d=243;break;
case 10: d=273;break;
case 11: d=304;break;
case 12: d=334;break;
	}
n[i]=d+c[i];
printf("%d\n",n[i]);
		}
}
}