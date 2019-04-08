/*
int cmp(const void *a,const void *b)
{
    return ((int*)a)->w-((int*)b)->w;
}


int main()
{  
	
	
	string str[2];
	string temp;

	cin>>str[1]>>str[0];
	for(int k=str[0].length();k>=0;k--)
		for(int m=0;m<=str[0].length()-k;m++){
	
		temp=str[0].substr(m,k);
		int loc=0;
		
		if(str[1].find(temp)!=-1){
			cout<<temp.length()<<endl;
			return 0;
		}
	}
	return 0;
}

string s1,s2;
int m[100001];
void work() 
{ 
  int l1,l2;
  int i,j; 
  int max=0;
  cin>>s1>>s2;
  l1=s1.length(); 
  l2=s2.length(); 
  for(j=0;j<l2;j++) 
    m[j]=(s1[0]==s2[j]); 
   
  for(i=1;i<l1;i++){
    for(j=l2-1;j>0;j--) 
      if(s1[i]==s2[j]) 
        m[j]=m[j-1]+1; 
       else m[j]=0;         


    for(j=0;j<l2;j++) 
      if(max<m[j])  
        max=m[j]; 
  }
       
     

  printf("%d\n",max); 
 // for(i=mi-max+1;i<=mi;i++) 
 //   printf("%c",s1[i]); 
 // printf("\n"); 

} 
int main() 
{ 
  work();
  return 0;
}

*/
int max_yueshu(int a,int b)
{
     if(b==0) return a;
	 else return max_yueshu(b,a%b);
}
int main()
{
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;++i)
        if(i%7!=0 && i%10!=7 && i/10!=7)
			sum+=i*i;
	cout<<sum<<endl;
	return 0;

}