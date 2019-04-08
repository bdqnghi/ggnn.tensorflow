int main()
{
	char sz[301];
	int a=0,i,k,b,c;
	scanf("%s\n",sz);
	b=strlen(sz);
	char e;
	for( k = 1 ; k<=b ; k++){
		for( i = 0; i < b - k; i++){
				if(sz[i] >=sz[i+1]){
					e = sz[i+1];
					sz[i+1] = sz[i];
					sz[i] = e;
			}
		}
	}
	
	for(i=0;i<b;i++){a=0;
		for(k=i;k<b;k++){
			
			if(sz[k]<'a'||sz[k]>'z'){
				break;
			}
            if(sz[i]==sz[k]){
				a++;}
			if(sz[i]-sz[i-1]==0){a=0;}			
			 		}
                  		if(a!=0){
			printf("%c=%d\n",sz[i],a);
		}
	}
	c=0;
	for(i=0;i<b;i++){
		if(sz[i]>='a'&&sz[i]<='z'){
			c++;
		}
	}
	if(c==0){
		printf("No");
	}
	return 0;
}

