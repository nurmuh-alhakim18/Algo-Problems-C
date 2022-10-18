#include <stdio.h>

main ()

{
    char A,B,C,D,E,F,G,H,I;
         scanf("%c %c %c\n",&A,&B,&C);
         scanf("%c %c %c\n",&D,&E,&F);
         scanf("%c %c %c",&G,&H,&I);

         printf("  %c\n",A);
         printf(" %c %c\n",D,B);
         printf("%c %c %c\n",G,E,C);
         printf(" %c %c\n",H,F);
         printf("  %c\n",I);
    return 0;

}
