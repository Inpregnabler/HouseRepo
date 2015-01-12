#include <stdio.h>

main()
{
  int liczba1, liczba2, liczba3;
  int suma;

  printf("\n Prosze podac trzy liczby:\n");
  scanf("%d%d%d",&liczba1,&liczba2,&liczba3);

  printf("\n\nA oto one:\n %d \n %d \n %d \n",liczba1,liczba2,liczba3);

  suma=liczba1+liczba2+liczba3;

  printf("\nSuma tych liczb wynosi: %d\n\n",suma);

  return 0;
}
