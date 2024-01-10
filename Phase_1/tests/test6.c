int main() {
    int i = 0;

    while (i < 5) {
        printf("%d", i);

        i++;
    }

    int j = 0;

    do {
        printf("%d", i+j);
    } while (j < 4);

    return 0;
}