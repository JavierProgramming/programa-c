{
    float cantidad;
    char moneda;

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    printf("Ingrese la moneda de origen (Q para quetzales, D para dólares, E para euros): ");
    scanf(" %c", &moneda);

    switch (moneda) {
        case 'Q':
        case 'q':
            printf("%.2f quetzales equivale a:\n", cantidad);
            printf("%.2f dólares\n", quetzales_a_dolares(cantidad));
            printf("%.2f euros\n", quetzales_a_euros(cantidad));
            break;
        case 'D':
        case 'd':
            printf("%.2f dólares equivale a:\n", cantidad);
            printf("%.2f quetzales\n", dolares_a_quetzales(cantidad));
            printf("%.2f euros\n", dolares_a_euros(cantidad));
            break;
        case 'E':
        case 'e':
            printf("%.2f euros equivale a:\n", cantidad);
            printf("%.2f quetzales\n", euros_a_quetzales(cantidad));
            printf("%.2f dólares\n", euros_a_dolares(cantidad));
            break;
        default:
            printf("Moneda no reconocida.\n");
    }

    return 0;
}