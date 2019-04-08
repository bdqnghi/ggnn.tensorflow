int main()
{
	char danchi[1000];
	char e[50][1000],a[1000],b[1000];gets(danchi);
         scanf("%s %s",a,b);
	int i,j,g=0,l=0,v=0,m=0;
	int max=0,min=100,max1,min1;
	
         int c=strlen(danchi);	
	for(j=0;j<50;j++)
	{        
                  l=0;	
		for(i=g;i<1000;i++)
			{				
				if(danchi[i]==' '){m++;break;}
				e[j][l]=danchi[i];
				g++;
				l++;v++;
                                    
			}g++;v++;
		
                if(v>c)break;
	}

for(i=0;i<m;i++){if(strcmp(e[i],a)==0){printf("%s ",b);}else{printf("%s ",e[i]);}}
if(strcmp(e[m],a)==0){printf("%s",b);}else{printf("%s",e[m]);}

	return 0;
}
