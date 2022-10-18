#include <stdio.h>
#include <stdlib.h>

int main () {

    long long int q = 0;
    long long int max = -1, *a;
    long long int w , e;

    scanf("%lld %lld" , &w,&e);

    a = (long long int *) malloc ( w * sizeof(long long int) );
    for ( q = 0 ; q < w ; q++ ) {
        scanf("%lld" , &a[q]);
        if ( a[q] > max )
            max = a[q];
    }

    long long int r = 0;
    long long int t = max - 1;
    long long int y = 0 , mid;
    long long int h = 0;

    while ( r <= t ) {
        mid = (t+r)/2;
        y = 0;
        for ( q = 0 ; q < w ; q++ ) {
            long long int temp = a[q] - mid;
            y += (temp > 0 ? temp : 0);
        }

        if ( y == e ) {
            h = mid;
            break;
        }
        else if ( y < e ) {
            t = mid - 1;
        }
        else {
            r = mid + 1;
            if ( mid > h )
                h = mid;
        }

    }
    printf("%lld\n" , h);

    return 0;
}

