int main() {
    for (int i = 0; ; i++) {
        if (i > 5) {
            break;
        }
        else if (i < 4) {
            printf("%d", i);
        }
        else {
            printf("%d", i-1);
        }
    }

    return 0;
}