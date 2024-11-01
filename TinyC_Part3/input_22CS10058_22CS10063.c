int a;
char b;

int main(int b, int c) {
    int ** v;

    **v = b+c;

    if (b || c) b = c;

    return 0;
}