int main() {
    int i, j, k;
    int ans;
    // for loop
    for(i = 0; i < j; i++) {
        for(j = 0; j < k && j < 5; ++j, ++k)
            k = j;
            ans++;
    }

    // while loop
    while( (i < j && i < k) || ans<100) {
        j--;
        ans++;
    }

    // do while loop
    do 
    {
        // nested while
        while(i < j)
            j--;
        i = k++;
    } while(k <= 140);

    return 0;
}