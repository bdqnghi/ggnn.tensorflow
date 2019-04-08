












int main()

{
	
char s1[251],s2[251];
int sum[251];
int flag=0;
	


int i,j,k;

int len1,len2;

int min,max;

memset(s1,0,sizeof(s1));
memset(s2,0,sizeof(s2));
cin.getline(s1,sizeof(s1));
cin.getline(s2,sizeof(s2));

memset(sum,0,sizeof(sum));




len1=strlen(s1);
len2=strlen(s2);


min=(len1>len2)? len2:len1;
max=(len1>len2)? len1:len2;


for(i=min-1;i>=0;i--)
{
    sum[max-(min-1-i)]=s2[len2-1-(min-1-i)]-'0'+s1[len1-1-(min-1-i)]-'0';

}

if(max==len1)
{
for(i=max-min;i>=1;i--)
{
	sum[i]=s1[i-1]-'0';
}
}else{
	for(i=max-min;i>=1;i--)
{
	sum[i]=s2[i-1]-'0';
}
}



for(i=max;i>=1;i--)
{
	sum[i-1]=sum[i-1]+sum[i]/10;
	sum[i]=sum[i]%10;
}
j=0;
while(sum[j]==0 && j<=max)
{
	j++;


}

if(sum[j]!=0)
{
    for(i=j;i<=max;i++)
	{
		cout<<sum[i];
	}
}

else{
	cout<<0;
}











	return 0;

}

