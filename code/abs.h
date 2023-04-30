#ifndef __FORMALISM__
#define __FORMALISM__

#include <limits.h>

/*@ logic integer abs(integer n) = 0<n?n:-n;*/

/*@ requires -2147483647<=n;
    terminates \true;
    assigns \nothing;
    ensures \result == abs(n);
 */
int abs(int n);

/*@ requires n+1 <= 2147483647;
    requires -2147483647 <= n;
    terminates \true;
    assigns \nothing;
    ensures \result == abs(n);*/
int abs2(int n);

#endif