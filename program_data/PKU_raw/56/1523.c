void main()
{
    int a;
	scanf("%d",&a);
    if (a<10)
		printf("%d",a);
    else if (a<100)
	    printf("%d",10*(int)(a-10*(int)(a/10))+(int)(a/10));
	else if (a<1000)
	    printf("%d",100*(int)(a-10*(int)(a/10))+10*(int)((a-100*(int)(a/100))/10)+(int)(a/100));
	else if (a<10000)
	    printf("%d",1000*(int)(a-10*(int)(a/10))+100*(int)((a-100*(int)(a/100))/10)+10*(int)((a-1000*(int)(a/1000))/100)+(int)(a/1000));
	else if (a<100000)
	    printf("%d",10000*(int)(a-10*(int)(a/10))+1000*(int)((a-100*(int)(a/100))/10)+100*(int)((a-1000*(int)(a/1000))/100)+10*(int)((a-10000*(int)(a/10000))/1000)+(int)(a/10000));
}
