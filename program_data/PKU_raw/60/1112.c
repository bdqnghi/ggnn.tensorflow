int s(int x);
int main()
{int i;
	int n;
	scanf("%d",&n);if(n<5){printf("empty");return 0;}
	for(i=2;i<n;i++){if(s(i)==1 && s(i+2)==1){printf("%d %d\n",i,i+2);}
		
	}
    
}
int s(int x){int k;
	for(k=2;x%k!=0;k++){}
	if(k==x){return 1;}
	else{}return 0;}