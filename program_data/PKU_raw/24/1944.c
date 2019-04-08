int main(){
	//char z[200];
	char z[200000];
	int i,k,j;
	int min,max;
	int d,b;
	int a;
	int sz[200];
    int num;
	int x,y;
	int h=0;
    int sx[200];
	x=-1;
	gets(z);
    a=strlen(z);
	for(i=0;i<=a-1;i++)
	{
		if(   (i==0)  &&  ((z[i]==' ') || (z[i]==','))    )
		{
			continue;
		}
		
		if( (    ( (i==0)&&(z[i]!=' ')&&(z[i]!=',') )     ||(  (i!=0)&&((z[i-1]==' ')  ||   (z[i-1]==','))  ))&&(z[i]!=',') &&(z[i]!=' ')    )
		{
			x++;
			sz[x]=1;//????
            sx[x]=i;//?????????
			for(j=i+1;j<=a-1;j++)
			{
				if((z[j]==' ')||(z[j]==','))
				{
					break;
				}
				if((z[j]!=' ')&&(z[j]!=','))
				{
					sz[x]++;
					
					
				}
			}
			
		}
	}
	

	max=0;
	min=1000;
	int maxindex,minindex;
	for(i=0;i<=x;i++)
	{
		if(max<sz[i])
		{
			max=sz[i];
			maxindex=i;
			
		}
		if(min>sz[i])
		{
			min=sz[i];
			minindex=i;
		}
	}
	d = maxindex;
	b = minindex;
//	for(i=0;i<=x;i++){
//		if(sz[i]==max){
//			d=i;
//			break;
//		}
		
//	}

//	for(i=0;i<=x;i++){
//		if(sz[i]==min){
//			b=i;
//			break;
//		}
//	}
	
	for(i=sx[d];i<=sx[d]+sz[d]-1;i++){
		printf("%c",z[i]);
		
	}
	printf("\n");
	for(i=sx[b];i<=sx[b]+sz[b]-1;i++){
		printf("%c",z[i]);
 	}
	
	printf("\n");
	
	return 0;
}
