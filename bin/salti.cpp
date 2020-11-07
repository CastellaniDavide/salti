/**
 * @file salti.cpp
 *
 * @version 01.01 2020-11-7
 *
 * @brief https://training.olinfo.it/#/task/salti/statement
 *
 * @ingroup salti
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */

// Includes
#include <bits/stdc++.h>
using namespace std;

#define DEBUG

// Variabiles
int N, result, mask;

// Main code
int main()
{
    // Cncomment the following lines if you want to read/write from files
#ifndef DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // DEBUG

    // Input
    cin >> N;

    for (int i = 0; i < 31; ++i)
    {
        mask = 1 << i;
#ifdef DEBUG
        cout << i << "\t" << mask << "\t" << (N & mask) << endl;
#endif // DEBUG
        if((N & mask) > 0)
            ++result;
    }

    // Output
    cout << result << endl;

    // End
    return 0;
}
