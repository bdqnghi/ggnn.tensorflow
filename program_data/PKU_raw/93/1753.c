void main()
{
	int x;
	scanf("%d",&x);
	if(fmod(x,3)==0 && fmod(x,5)==0 && fmod(x,7)==0)
		printf("%d %d %d\n",3,5,7);
    if(fmod(x,3)==0 && fmod(x,5)==0 && fmod(x,7)!=0)
        printf("%d %d\n",3,5);
	if(fmod(x,5)==0 && fmod(x,7)==0 && fmod(x,3)!=0)
		printf("%d %d\n",5,7);
	if(fmod(x,3)==0 && fmod(x,7)==0 && fmod(x,5)!=0)
        printf("%d %d\n",3,7);
	if(fmod(x,3)==0 && fmod(x,5)!=0 && fmod(x,7)!=0)
        printf("%d\n",3);
    if(fmod(x,3)!=0 && fmod(x,5)==0 && fmod(x,7)!=0)
        printf("%d\n",5);
    if(fmod(x,3)!=0 && fmod(x,5)!=0 && fmod(x,7)==0)
		printf("%d\n",7);
	if(fmod(x,3)!=0 && fmod(x,5)!=0 && fmod(x,7)!=0)
		printf("%c\n",'n');
}