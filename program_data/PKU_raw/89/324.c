int main ()
{
int n, i = 0,j, flag = 0, tempa,tempb;
int a[100000] = {0}, b[100000] = {0};

cin >> n;
while(cin >> tempa >> tempb)
{
if(tempa == 0 && tempb == 0)
break;
b[tempb] ++;

}
for(i = 0;i < n;i ++)
{
if( b[i] == n - 1)
cout << i << endl;
flag = 1;
}
if(flag == 0)
cout << "NOT FOUND" << endl;
return 0;
}