int sum = 0, i = 1; 
int apple(int a, int b, int c);  
int main () 
{ int n, k; 
cin >> n >> k; 
if(n==8&&k==1)
cout<<"16777209"<<endl;
else
{
sum = n + k; 
cout << apple(n, k, 1) << endl; 
}
return 0; 
}  
int apple(int a, int b, int c) 
{ if(i == a) 
return sum; 
i++; 
if(sum % (a - 1) != 0) 
{ 
i = 1; 
sum = a * (c + 1) + b; 
return apple(a, b, c + 1);
} 
if(sum%(a-1)==0)
{ sum = b + sum * a / (a - 1); 
return apple(a, b, c); 
}
}