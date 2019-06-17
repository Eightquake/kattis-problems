#include <stdio.h>
int main() {
  int a, b, c, d;
  int count = 1;
  int det = 0;
  while(scanf("%d %d %d %d", &a, &b, &c, &d) == 4) {
    det = a * d - b * c;
    printf("Case %d:\n%d %d\n%d %d\n", count++, d/det, -b/det, -c/det, a/det);
  }
  return 0;
}
