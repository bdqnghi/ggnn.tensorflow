void main()
{
 int n;
 int indiv,ten,hundred,thousand,ten_thousand,place;
 scanf("%d",&n);
 if(n>9999)
	place=5;
 else if(n>999)
	place=4;
 else if(n>99)
	place=3;
 else if(n>9)
	 place=2;
 else
	 place=1;
ten_thousand=(int)(n/10000);
thousand=(int)((n-ten_thousand*10000)/1000);
hundred=(int)((n-10000*ten_thousand-1000*thousand)/100);
ten=(int)((n-10000*ten_thousand-1000*thousand-100*hundred)/10);
indiv=(int)(n-10000*ten_thousand-1000*thousand-100*hundred-10*ten);
switch(place)
{case 5:
        printf("%d%d%d%d%d\n",indiv ,ten,hundred,thousand,ten_thousand);
		break;
case 4:
        printf("%d%d%d%d\n",indiv,ten,hundred,thousand);
		break;
case 3:
        printf("%d%d%d\n",indiv,ten,hundred);
		break;
case 2:
        printf("%d%d\n",indiv,ten);
		break;
case 1:
        printf("%d\n",indiv);
		break;
}
}