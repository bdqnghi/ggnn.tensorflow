int main() 
{ 
int count[26]={0},t=0,j,k=0; 
char i,str[300],*ps,zf[26]; 
scanf("%s",str); 
for(ps=str;*ps!='\0';ps++) 
{ 
	if(*ps>='a'&&*ps<='z'){ 
		for(i='a';i<='z';i++){ 
			if(i==*ps){ 
				t=i-'a'; 
				zf[t]=i; 
				count[t]++; 
			} 
		} 
	} 
} 
for(j=0;j<26;j++){ 
	if(count[j]!=0){ 
		printf("%c=%d\n",zf[j],count[j]); 
		k+=1; 
	} 
} 
if(k==0) 
printf("No"); 
return 0; 
} 