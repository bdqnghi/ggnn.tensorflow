
struct node{
	int x;
	int layer;
	int t;
}a[3];//????????????????????????

void main()
{
	int i,j,tmp,sign=0,sign1=0,sign2=0;
	scanf("%d %d",&a[1].x,&a[2].x);
	if(a[1].x==a[2].x) printf("%d\n",a[1].x);
	else
	{
		if(a[1].x==1||a[2].x==1) printf("1\n");
		else
		{
			if(a[1].x<a[2].x) {tmp=a[1].x;a[1].x=a[2].x;a[2].x=tmp;}//?????
			for(i=1;i<=10;i++)
			{
				if(a[1].x>=pow(2,i)&&a[1].x<pow(2,i+1)) {a[1].layer=i+1;sign1=1;}
				if(a[2].x>=pow(2,i)&&a[2].x<pow(2,i+1)) {a[2].layer=i+1;sign2=1;}
				if(sign1)
					if(sign2) break;
			}//????????
			a[1].t=a[1].x;
			a[2].t=a[2].x;
			for(i=a[1].layer,j=a[2].layer;i>=1;)
			{
				if(a[1].t%2) a[1].t=(a[1].t-1)/2;
				else a[1].t=a[1].t/2;
				i--;
				if(i==a[2].layer){
					if(a[1].t==a[2].t) {printf("%d\n",a[1].t);sign=1;break;}}
				else 
					if(i<a[2].layer)
					{
						do{
							if(a[2].t%2) a[2].t=(a[2].t-1)/2;
							else a[2].t=a[2].t/2;
							j--;
						}while(j>i);
						if(a[2].t==a[1].t) {printf("%d\n",a[1].t);sign=1;break;}
					}
			}
		}
	}
}
