#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite dois numeros [N1 > N2]: \n");
    scanf("%d %d", &num1, &num2);
    
    printf("Divisao: %d / %d = %d \n", num1, num2, num1/num2);
    printf("Resto da divisao inteira: %d // %d = %d \n", num1, num2, num1%num2);

    return 0;
}