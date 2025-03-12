

char* compressString(char str[]) {
    static char compressed[200];
    int n = strlen(str);
    int count = 1, j = 0;

    for (int i = 0; i < n; i++) {
        compressed[j++] = str[i];
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        if (count > 1) {
            j += sprintf(&compressed[j], "%d", count);
        }
        count = 1;
    }

    compressed[j] = '\0';
    return (strlen(compressed) < n) ? compressed : str;
}
