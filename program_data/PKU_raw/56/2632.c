void main()
{   
	int a,t1,t2,t3,t4,t5,w;
	scanf("%d",&a);
	if(a/10000>0)w=5;
	else if(a/1000>0)w=4;
	else if(a/100>0)w=3;
	else if(a/10>0)w=2;
	else w=1;
	t1=a/10000;
    t2=a/1000-t1*10;
    t3=a/100-t1*100-t2*10;
    t4=a/10-t1*1000-t2*100-t3*10;
	t5=a/1-t1*10000-t2*1000-t3*100-t4*10;

	switch(w)
	{
	case 5:printf("%d%d%d%d%d\n",t5,t4,t3,t2,t1);break;
	case 4:printf("%d%d%d%d\n",t5,t4,t3,t2);break;
	case 3:printf("%d%d%d\n",t5,t4,t3);break;
	case 2:printf("%d%d\n",t5,t4);break;
	case 1:printf("%d\n",t5);break;
    }
}
