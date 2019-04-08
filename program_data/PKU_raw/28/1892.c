int main()
{
 	char zfc[30000];
 	int sz[301];
 	int i,num=0,l,x=0;
 	gets(zfc);
 	l=strlen(zfc);
 	for(i=0;i<l;i++){
		if(i==0&&zfc[i]==' ') continue;
		else{
			if(zfc[i]!=' '){
				num++;
				}
			else{
				if(zfc[i-1]!=' '){
					sz[x]=num;
					x++;
					num=0;
					}
				}
	    	}	
		}
	if(zfc[l-1]!=' '){
		sz[x]=num;
		x++;
		}
	for(i=0;i<x;i++){
		if(i<x-1) printf("%d,",sz[i]);
		else printf("%d",sz[i]);
		}
 	
    return 0;
}