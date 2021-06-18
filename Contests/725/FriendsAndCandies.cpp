#include<bits/stdc++.h>

using namespace std;

typedef vector < int > vi;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, res = 0;
        cin >> n;
        vi inp(n);

        //input of the array or candies
        for (auto & a: inp) {
            cin >> a;
        }

        long long sum = 0;
        sum = accumulate(inp.begin(), inp.end(), 0);
        long long mean = sum / n;
        //checking if the array can be balanced



        //array cant be balanced
        if (sum % n != 0) {
            res = -1;

        } else {
            //array can be balanced

            long long max = * max_element(inp.begin(), inp.end());

            res = 0;
            // if the array can be balanced and max!=mean that  means all elements above mean have to be used.
            if (max > mean) {
                for (long long i = 0; i < inp.size(); i++) {
                    if (inp[i] > mean) {
                        res += 1;
                    }
                }

            }

        }
        cout << res << endl;
    }



    return 0;
}