#include <stdio.h>

struct sum {
   int feet;
   float inch;
};

int main() {
   struct sum d1, d2, result;

  scanf("%d %f", &d1.feet,&d1.inch);
  scanf("%d %f", &d2.feet,&d2.inch);

   result.feet = d1.feet + d2.feet;
   result.inch = d1.inch + d2.inch;

   while (result.inch >= 12.0) {
      result.inch = result.inch - 12.0;
      ++result.feet;
   }
   printf("Sum of distances = %d\' %.1f\"", result.feet, result.inch);
   return 0;
}
