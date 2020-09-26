#include <bits/stdc++.h>
using namespace std;

// Implementation of Z-algorithm
// for linear time pattern searching
void compute_z(string s, int z[])
{
    int l = 0, r = 0;
    int n = s.length();
    for (int i = 1; i <= n - 1; i++) {
        if (i > r) {
            l = i, r = i;
            while (r < n && s[r - l] == s[r])
                r++;
            z[i] = r - l;
            r--;
        }
        else {
            int k = i - l;
            if (z[k] < r - i + 1) {
                z[i] = z[k];
            }
            else {
                l = i;
                while (r < n && s[r - l] == s[r])
                    r++;
                z[i] = r - l;
                r--;
            }
        }
    }
}

// Function to get the count of the cyclic
// permutations of b that given 0 when XORed with a
int countPermutation(string a, string b)
{
    // concatenate b with b
    b = b + b;

    // new b now contains all the cyclic
    // permutations of old b as it's sub-strings
    b = b.substr(0, b.size() - 1);

    // concatenate pattern with text
    int ans = 0;
    string s = a + "$" + b;
    int n = s.length();

    // Fill z array used in Z algorithm
    int z[n];
    compute_z(s, z);

    for (int i = 1; i <= n - 1; i++) {

        // pattern occurs at index i since
        // z value of i equals pattern length
        if (z[i] == a.length())
            ans++;
    }
    return ans;
}

// Driver code
int main()
{
    int t;
    cin >> t;
    while(t--){
        string a;
        string b;
        cin >> a;
        cin >> b;
        cout << countPermutation(a, b) << endl;
    }


    return 0;
}
