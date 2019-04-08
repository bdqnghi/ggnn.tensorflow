int main()
{
	char danchi[1000];
	char e[50][1000];
	int k[50];
	int i,j,g=0,l=0,a,v=0,m=0;
	int max=0,min=100,max1,min1;
	gets(danchi);
         int c=strlen(danchi);	
	for(j=0;j<50;j++)
	{        
                  l=0;	
		for(i=g;i<100;i++)
			{				
				 if(danchi[i]==' '){m++;break;}
				e[j][l]=danchi[i];
				g++;
				l++;v++;
                                    
			}g++;l++;v++;
		k[j]=strlen(e[j]);
                if(v>c)break;
		
	}
	for(a=0;a<j+1;a++)
	{
		if(k[a]==0)
			break;
		if(max<k[a])
			{
				max=k[a];
				max1=a;
			}
		if(min>k[a])
			{
				min=k[a];
				min1=a;
			}
         if(a>m)break;
	}
	printf("%s\n",e[max1]);
	printf("%s\n",e[min1]);
	return 0;
}
