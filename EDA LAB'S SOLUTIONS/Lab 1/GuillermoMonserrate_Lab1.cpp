//EDA LAB 1 MENTAL DISORDER Guillermo Monserrate Sánchez

//UPDATED WITH COMPLEXITY AND SPECIFICATION!!!

/*The DSA professor has been diagnosed with Obsessive Compulsive Disorder. One of his compulsive
behaviours is that he likes to classify the food he eats depending on its shape and size, stacking the items
which are similar enough. Due to his disorder, he can only eat the stacks that have an even number
of elements, so he needs a program that reads the number of elements of each stack and tells him how
many stacks he can eat.*/

#include <string>
#include <iostream>
using namespace std;

int evenFood(int v[], int stacks);
int processTestCase();
const int MAX = 10000;
const int MAX9 = 999999;

//PRE CONDITION: {(length v[] = stacks)}

//POST CONDITION: {baseCase = #i : 0 <= i < stacks : v[i]% == 0}

//INVARIANT? {(0 = i <= w <= n) : v[w])}

//COMPLEXITY 5n - 2

int solveProblem(int v[], int stacks) { //Complexity 5n - 4 + 1 + 1  = 5n - 2

	int baseCase = 0; // 1
	int i = 0; //1 

	while (i < stacks) { //4 + 1 * 1 = 5 * (n - 1) + 1 (de la ultima comparación)
		if (v[i] % 2 == 0) { //1 + 1 + 1 + 1 = 4  
			baseCase++; //1 (basecase = basecase + 1 the should it be 2?) 
		}
		i++; //1
	}
	return baseCase; // 0 (nothing)
}

int processTestCase() { 
	int stacks;
	int m[MAX9];
	int aux, result;

	cin >> stacks;

	if (stacks > 0 && stacks < 999999) {
		for (int i = 0; i < stacks; i++) {
			cin >> aux;
			m[i] = aux;
		}
	}

	result = solveProblem(m, stacks);
	
	return result;

	//solveProblem(v, number);
}

int main(){

	int v[MAX];
	int solution, stacks, x;

	cin >> stacks;

	if (stacks < MAX) {
		for (int x = 0; x < stacks; x++){
			solution = processTestCase();
			cout << solution << endl;
		}
	}
	//cout << "He can eat" << numStacks << "number of stacks";
	cin >> x;

	return 0;
}