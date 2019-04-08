int main() 
{ 
char x1[10000]={'\0'},y1[10000]={'\0'}; // ????? ????num?k????? 

int num = 0, i, j, k = 0, max = 1, flag[1000] = {0}; 
int x[1000] = {0}, y[1000] = {0}; 
gets(x1); 
gets(y1); 
char *px = x1, *py = y1; 
while(*px != '\0') 
{ 
x[num] = atof(px); 
num++; 
px++; 
while(*px != ',' && *px != '\0') // ????x1???????x1????????????????????????????????????????? 
px++; 
px++; 
} 
while(*py != '\0' ) 
{ 
y[k] = atof(py); 
k++; 
py++; 
while(*py != ','&& *py != '\0') 
py++; 
py++; 
} 

for(i = 0; i < num; i++) 
{ 
for(j = x[i]; j < y[i]; j++) 
{ 
flag[j]++; 
} 
} 
for(i = 0; i < 1000; i++) 
{ 
if(flag[i] > max) max = flag[i]; 
} 
cout << num << " " << max << endl; 
return 0; 
} 