int main()
{
	int w;
	scanf("%d",&w);
	if(((w+13%7)%7)-1==5) printf("%d\n",1);
	if(((w+44%7)%7)-1==5) printf("%d\n",2);
	if(((w+72%7)%7)-1==5) printf("%d\n",3);
	if(((w+103%7)%7)-1==5) printf("%d\n",4);
	if(((w+133%7)%7)-1==5) printf("%d\n",5);
	if(((w+164%7)%7)-1==5) printf("%d\n",6);
	if(((w+194%7)%7)-1==5) printf("%d\n",7);
	if(((w+225%7)%7)-1==5) printf("%d\n",8);
	if(((w+256%7)%7)-1==5) printf("%d\n",9);
	if(((w+286%7)%7)-1==5) printf("%d\n",10);
	if(((w+317%7)%7)-1==5) printf("%d\n",11);
	if(((w+347%7)%7)-1==5) printf("%d\n",12);
	return 0;
}