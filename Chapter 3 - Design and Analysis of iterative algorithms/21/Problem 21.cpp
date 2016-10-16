#include <string>
#include <iostream>
using namespace std;

/* ALTERNATIVE SPECIFICATION:
{(m = min w:0 <= w < n : v[w]) and (M = max W : 0 <= W < n : v[W]) and (d = M - m)} 
We will follow this specification so that the algorithm is lineal
*/
int maxDif(int v[], int n);

int maxDif(int v[], int n) {
	int m, M, d, i;

	m = v[0];
	M = v[0];
	i = 1; d = 0;

	while(i < n) {
		if(m > v[i]) {
			m = v[i];
		}
		if(M < v[i]) {
			M = v[i];
		}
		i++;
	}
	
	d = M - m;
	
	return d;
}

/*VERIFICATION
We calculate the invariant I = (1)and(2)

(1) 1 <= i <= n
(2) ((m = min w : 0 <= w < i : v[w]) and (M = max W : 0 <= W z i : v[w]))

I = (1 <= i <= n and ((m = min w : 0 <= w < i : v[w]) and (M = max W : 0 <= W z i : v[w])))

(I1) The invariant is verified before the loop 

	{P} d = 0, m = v[0], M = v[0], i = 1 {I}
	
	pmd (d = 0, m = v[0], M = v[0], i = 1; I) ...
*/