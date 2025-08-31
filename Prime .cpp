#include <iostream>
#include <vector>
using namespace std;

vector<int> primeFactorization(int n) 
{
    vector<int> factors;
    while (n % 2 == 0) 
	{
        factors.push_back(2);
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) 
	{
        while (n % i == 0) 
		{
            factors.push_back(i);
            n /= i;
        }
    }

    if (n > 2) 
	{
        factors.push_back(n);
    }
    return factors;
}

int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> result = primeFactorization(n);

    cout << "Prime factors: [ ";
for (size_t i = 0; i < result.size(); i++) 
{
    cout << result[i] << " ";
}
cout << "]" << endl;

    return 0;
}
