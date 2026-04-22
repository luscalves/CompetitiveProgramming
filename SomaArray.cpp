//Soma todos os valores de um vetor
#include <bits/stdc++.h>

using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int N = 0, i=0, somaTotal = 0, soma=0;
double media;
cin>>N;
vector<int> array(N);

for(i=0; i<N; i++)
{	cin>>array[i];
	somaTotal+=array[i];
}

cout<<somaTotal<<"\n";
media = (double)somaTotal/N;
cout<<media<<"\n";

return 0;
}
