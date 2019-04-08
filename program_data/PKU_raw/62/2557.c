
int main(int argc, char* argv[])
{ int q=0,i,j;
char tra[1000],yaode[1000];
gets(tra);
for(i=0,j=0;i<1000;i++)	
if(tra[i]!=' '){
		yaode[j]=tra[i];
	    j++;
		q=0;
	}
	else
		if(tra[i]==' '&&q==0){
			yaode[j]=tra[i];
			q++;
			j++;
		}
		else 
			if(tra[i]=='.'){
				yaode[j]=tra[i];
				break;
			}
			printf("%s",yaode);

	return 0;
}

