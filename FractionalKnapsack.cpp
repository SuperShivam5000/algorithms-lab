#include <bits/stdc++.h> 
using namespace std; 
 
class Item{
    public: 
	int value, weight; 

	// Constructor 
	Item(int value, int weight) {
        this->weight=weight;
        this->value=value;
    }
}; 

bool cmp(Item a, Item b) 
{ 
	double r1 = (double)a.value / a.weight; 
	double r2 = (double)b.value / b.weight; 
	return r1 > r2; 
} 

double fractionalKnapsack(struct Item arr[], 
						int N, int size) 
{ 
	sort(arr, arr + size, cmp); 
	int curWeight = 0; 
	double finalvalue = 0.0; 

	for (int i = 0; i < size; i++) { 
		if (curWeight + arr[i].weight <= N) { 
			curWeight += arr[i].weight; 
			finalvalue += arr[i].value; 
		} 
		else { 
			int remain = N - curWeight; 
			finalvalue += arr[i].value * ((double)remain / arr[i].weight); 
            break; 
		} 
	} 
    return finalvalue; 
} 

int main() 
{ 
	int N = 60; //weight
    Item arr[] = { { 100, 10 }, { 280, 40 }, { 120, 20 }, { 120, 24 } }; 
    int size = sizeof(arr) / sizeof(arr[0]); 

	// Function Call 
	cout<<"Maximum profit earned = "<<fractionalKnapsack(arr, N, size)<<endl; 
	return 0; 
}
