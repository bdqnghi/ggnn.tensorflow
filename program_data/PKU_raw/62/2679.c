int main()
{
	int a,b,i,j;
	char kj[1000];
	gets(kj);
	a=strlen(kj);
	b=a;
	for(i=0;i<a;i++){
		if(kj[i]==' '){		
			if(kj[i+1]==' '){				
				for(j=i+1;j<a;j++){
					kj[j-1]=kj[j];					
				}
			b--;
			i--;
			}	
		}
	if(i==b-1)
		break;
	}
	for(i=0;i<b;i++){
	printf("%c",kj[i]);
	}
	return 0;
}
	