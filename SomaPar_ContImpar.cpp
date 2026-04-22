//Soma os números pares e cria um contador dos números impares 
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
	cin>>array[i];
	
	if(array[i]%2 == 0)
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
