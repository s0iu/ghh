
#include <iostream>
using namespace std;
int main()
{
setlocale (LC_ALL, "RUS");
int i,j,N,M,a[20][20],b[20][20],k=0,s,s1;
cout<<"N="; 
cin>>N;
cout<<"M="; 
cin>>M;
cout<<"Input matrix A \n";


for (i=0; i<N; i++) 
for (j=0; j<M; j++)
cin>>a[i][j];
for (i=0; i<N; i++) 
for (j=0; j<M; j++)
b[i][j]=a[i][j];
cout<<"matrix A \n";
for (i=0; i<N; i++)
{
for (j=0; j<M; j++)
cout<<a[i][j]<<"\t"; 
cout<<endl; 
}
for (i=1; i<=N; i++)
{
for (j=1; j<=M; j++)
if (a[i-1][j-1]<a[i][j])
a[i][j]=a[i-1][j-1];//последнее число минимальное
}
for (i=0; i<N; i++) {
for (j=0; j<M; j++){
if (b[i][j]==a[N-1][M-1])
k+=1;}//подсчет одинаковых минимальных чисел
}
if (k==1)
{
	for (i=0; i<N; i++) {
for (j=0; j<M; j++){
if (b[i][j]==a[N-1][M-1]){
	for (int p=0;p<M;p++)
	s+=b[i][p];
	
}

}}
cout<<s;}

for (i=0; i<N; i++)
{
for (j=0; j<M; j++);{
b[i][M]+=b[i][j];
cout<<b[i][M];
}

}

if (k>1){
	for (i=0; i<N; i++)
{
for (j=0; j<=M; j++)
cout<<b[i][j]<<"\t";
cout<<endl; 
}
}

return 0;

}
