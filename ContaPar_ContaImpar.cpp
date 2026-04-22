// Conta os números pares e os números positivos de um vetor
#include <bits/stdc++.h>

using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long int N = 0 , i, contPar=0,contPositivo=0;
cin>>N;
vector<int> array(N);

for(i=0; i<N; i++){
	cin>>array[i];
	
	if(array[i]%2==0)
	{
		contPar++;
	}
	if(array[i]>0)
	{
		contPositivo++;
	}
}

cout<< contPar << "\n";
cout<< contPositivo << "\n";

return 0;
}
