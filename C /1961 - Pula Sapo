#include <stdio.h>
 
int main()
{
  int aP, nC, i, C = 0;
  scanf("%d %d", &aP, &nC);
  int aC[nC];

  for (i = 0; i < nC; i++)
  {
    scanf("%d", &aC[i]);
  }
  for (i = 0; i <= nC; i++)
  {
    if(aC[i] > aC[i+1]) {
        if (aP >= aC[i] - aC[i + 1]) {
            C++;
        }
    } else {
        if (aP >= aC[i + 1] - aC[i]) {
            C++;
        }
    }
}
  if (C < (nC - 1)) {
        printf("GAME OVER\n");
    } else {
        printf("YOU WIN\n");
    }
    return 0;
}
