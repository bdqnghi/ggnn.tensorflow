main()
{

    int i=0;
    char a[100];
	while(scanf("%s",a)!=EOF)
	{if(i==0){printf("%d",strlen(a));i++;}
	 else printf(",%d",strlen(a));
	}
}
