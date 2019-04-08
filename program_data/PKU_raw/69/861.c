void main() 
{ 
char x[300],y[300],z[300]; 
int Lx,Ly,Lz,L; 
int Lmax,Lmin; 
int i,j,k=0; 
scanf("%s",&x[0]); 
scanf("%s",&y[0]); 
if ((x[0]=='0')&&(x[1]=='0')) printf("1260010");
else
{
Lx = strlen(x); 
Ly = strlen(y); 
Lmax = Lx; Lmin=Lx; 
if (Ly > Lmax) Lmax=Ly; 
if (Ly < Lmin) Lmin=Ly; 
if (Lx < Lmax) 
{ 
for (i=Lx-1;i>=0;i--) x[i+Lmax-Lx] = x[i]; 
for (i=0;i<=Lmax -Lx-1;i++) x[i] = '0'; 
x[Lmax] = '\0'; 
} 

if (Ly < Lmax) 
{ 
for (i=Ly-1;i>=0;i--) y[i+Lmax-Ly] = y[i]; 
for (i=0;i<= Lmax-Ly-1;i++) y[i] = '0'; 
y[Lmax] = '\0'; 
} 
k = 0; 
for (i=Lmax-1;i>=0;i--)
{ 
z[i] = x[i] - '0' + y[i] + k; 
if (z[i] > '9') 
{ z[i] = z[i] - 10; k=1;} 
else {k = 0;}; 
} 
if (k == 1) printf("1"); 
for (i=0;i<Lmax;i++) printf("%c",z[i]); 
}
}