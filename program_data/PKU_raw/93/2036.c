int main()
{
	int a,b,c,d,e,f,g,h;
	scanf("%d",&a);
    b=a%3;
    c=a%5;
    d=a%7;
    e=a%15;
    f=a%21;
    g=a%35;
    h=a%105;
    if(h==0)
    printf("3 5 7\n");
    else if(e==0)
    printf("3 5\n");
    else if(f==0)
    printf("3 7\n");
    else if(g==0)
    printf("5 7\n");
    else if(b==0)
    printf("3\n");
    else if(c==0)
    printf("5\n");
    else if(d==0)
    printf("7\n");
    else printf("n");
	return 0;
}
