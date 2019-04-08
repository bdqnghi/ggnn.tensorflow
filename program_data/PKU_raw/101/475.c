	char max(int a,int b, int c){
			if((a>b)&&(a>c)) return 'A';
			if((b>a)&&(b>c)) return 'B';
			if((c>b)&&(c>a)) return 'C';
			}

			char min(int a,int b, int c){
			if((a<b)&&(a<c)) return 'A';
			if((b<a)&&(b<c)) return 'B';
			if((c<b)&&(c<a)) return 'C';
			}
int main( )
{
	int a,b,c;
	for(a=1;a<=3;a++)
		for(b=1;b<=3;b++)
			for(c=1;c<=3;c++)
			{if((a==(3-(b>a)-(c==a)))&&(b==(3-(a>b)-(a>c)))&&(c==(3-(c>b)-(b>a))))
			{  
				cout<<min(a,b,c);
			   if(max(a,b,c)-'A'+min(a,b,c)-'A'==2) cout<<"B";
               if(max(a,b,c)-'A'+min(a,b,c)-'A'==3) cout<<"A";
			   if(max(a,b,c)-'A'+min(a,b,c)-'A'==1) cout<<"C";
			   cout<<max(a,b,c);  }}
	   
return 0;
}
	