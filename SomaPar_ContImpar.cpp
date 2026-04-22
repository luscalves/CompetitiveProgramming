// Percorra um vetor, some os números pares e conte quantos ímpares tem 
#include <bits/stdc++.h>

using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long int N, i, somaPares=0, contImpar=0;
cin>>N;
vector<int> array(N);

for(i=0; i<N; i++)
{
	cin>>array[N];
	
	if(array[N]%2 == 0)
	{
		somaPares += array[N];
	}else{
		contImpar++;
	}
}

cout<<somaPares<<"\n";
cout << contImpar<<"\n";

return 0;
}
