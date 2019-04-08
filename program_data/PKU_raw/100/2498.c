int main()
{    
	int i=0;
	char a[26]={0},b[26]={0};
	char temp=0,semp=0;
	int test=1;
	for(i=0;i<300;i++)    
	{        
		temp=getchar();
		semp=temp;
		if('\n'==temp)
			break;       
		temp=temp-'a'; 
		semp=semp-'A';
		if(0<=temp&&temp<26)
			a[(int)temp]++;  
		if(0<=semp&&semp<26)
			b[(int)semp]++; 
	} 
	for(i=0;i<26;i++)
	{            
		if(b[i])        
		{            
			printf("%c=%d\n",('A'+i),b[i]);            
			test=0;        
		}    
	}
	for(i=0;i<26;i++)
	{            
		if(a[i])        
		{            
			printf("%c=%d\n",('a'+i),a[i]);            
			test=0;        
		}    
	}   
	if(test)
		printf("No\n");    
	return 0;
}