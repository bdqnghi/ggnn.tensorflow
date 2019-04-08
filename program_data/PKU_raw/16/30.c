int main()
{
	int a[4], b, i;
	scanf("%d", &b);
	if(b==10000)
		printf("00001");
	else
    {    
		for(i=0; i<=3; i++)
		    a[i]=b%(int)pow(10, i+1)/(int)pow(10, i);
	    for(i=0; i<=3; i++)
			if(b>=pow(10, i))
                printf("%d", a[i]);
	}
	return 0;
}
