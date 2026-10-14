#include <stdio.h>
int giorno_giuliano(int g, int m, int a){
    int n0, n1, n2, n3;
    n0 = (m - 14) / 12;
    n1 = 1461 * (a + 4800 +n0) / 4;
    n2 = 367 * (m - 2 -12 * n0) / 12;
    n3 = 3 * (a + 4900 + n0) / 400;
    return n1 + n2 + n3 + g - 32075;
}
int main(){
    int g1, m1, a1;
    int g2, m2, a2;
    int jd1, jd2;
    printf("Prima data\n");
    scanf("%d%d%d", &g1, &m1, &a1);
    jd1 = giorno_giuliano(g1, m1, a1);

    printf("Seconda data\n");
    scanf("%d%d%d", &g2, &m2, &a2);
    jd2 = giorno_giuliano(g2, m2, a2);
    printf("Differenza: %d\n",jd1-jd2);

}